:loop
del a.exe
g++ %1 
if exist a.exe (
    type nul >> in.txt
    a.exe <in.txt >out.txt
    cls
    type out.txt
    pause
    goto loop

) 
else (
    echo CE
    pause
    goto loop
)

