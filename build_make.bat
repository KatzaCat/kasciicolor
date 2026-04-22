@ECHO OFF

CD ./build

  cmake                                ^
    -G "Unix Makefiles"                ^
    -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ^
    -DKAC_ISTESTING=TRUE               ^
    ..

CD ..
