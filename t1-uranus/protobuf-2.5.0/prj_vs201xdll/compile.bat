setlocal

@rem =============win32 version====================

call "%VS100COMNTOOLS%\vsvars32.bat"


if /I "%1" == "noclean" (

devenv protobufdll.vcxproj /ReBuild "Release" /Out ..\..\..\10-common\version\compileinfo\protobufdll_win32_vs201x_dll_r.txt

) else (

del /F /Q Release\*.*

devenv protobufdll.vcxproj /ReBuild "Release" /Out ..\..\..\10-common\version\compileinfo\protobufdll_win32_vs201x_dll_r.txt
)


endlocal