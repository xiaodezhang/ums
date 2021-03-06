#!/bin/sh

#echo sh_name=$0
#echo param_num=$#

#define ums work path
ums_path="/tp"

#check ums_path
[ -d $ums_path ] || exit 1

#check commonfunction.sh
[ -x $ums_path/commonfunction.sh ] || exit 1
. $ums_path/commonfunction.sh

#change ums_path to work path
old_dir=$(pwd)
echo $old_dir
cd $ums_path

#
#begin startums
#

#is check keepalived
[ "X$1" == "Xinitums" ] && sleep 10

#install umslib_path
export LD_LIBRARY_PATH="$ums_path/lib"

#stopums first
[ -x $ums_path/stopums.sh ] && . $ums_path/stopums.sh

sleep 2

#core path
ulimit -c unlimited
corepath="/usr/log"
[ -d $corepath ] || mkdir $corepath
echo "$corepath/core.%p.%e.sig_%s" > /proc/sys/kernel/core_pattern

############
#start logserver
process_start_name="$ums_path/startlogserver.sh"
start_process $process_start_name
sleep 1

############
#start ums all moudle
ums_moudle_name=$(getvalue_withkey $ums_path/ums_moudle.ini "ums_moudle_name")
ums_moudle_name=($ums_moudle_name)
length=${#ums_moudle_name[@]}

#start the moudles by order
for((i=0;i<$length;i++));do
	process_start_name="$ums_path/${ums_moudle_name[$i]}"
	start_process $process_start_name
	sleep 1
done

sleep 10

############
#start httpd
# 启动前删除logs下的pid文件，避免启动失败
rm -rf /usr/apache/logs/*.pid
process_start_name="/usr/apache/bin/apachectl"
process_start_param="start"
start_process $process_start_name $process_start_param

############
#start daemonrestart.sh
process_start_name="$ums_path/daemonrestart.sh"
start_process $process_start_name

#back to old_path
cd $old_dir

