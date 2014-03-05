echo Executing NeXTTool to upload main.rxe...
 /cygdrive/C/cygwin/nexttool/NeXTTool.exe /COM=usb -stop
 /cygdrive/C/cygwin/nexttool/NeXTTool.exe /COM=usb -download=main.rxe
 /cygdrive/C/cygwin/nexttool/NeXTTool.exe /COM=usb -listfiles=main.rxe
 /cygdrive/C/cygwin/nexttool/NeXTTool.exe /COM=usb -run=main.rxe
echo NeXTTool is terminated.
