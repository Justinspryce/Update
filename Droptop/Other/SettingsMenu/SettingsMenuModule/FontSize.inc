[Rainmeter]

[Variables]
DropdownMenuFontSizeB=(#DropdownMenuFontSize#-([#FontSizeOffset[#ThemeNum]]*#DroptopSize#)+((-4+[#*CURRENTSECTION*])*#DroptopSize#))

[InfoStyle]
FontSize=#DropdownMenuFontSizeB#
