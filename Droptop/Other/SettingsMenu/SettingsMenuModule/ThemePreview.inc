[Rainmeter]

[Variables]
SettingsMenuNumber=1.1.1

[MeasureRun]
Measure=Plugin
Plugin=RunCommand
Parameter=taskkill /T /F /IM "Droptop Rainmeter.exe"
State=Hide
OutputType=ANSI
OutputFile=

[MeasureSupporter]
Measure=Calc
IfCondition=(#Supporter#=0) && (#SettingsMenuIndex#>4)
IfTrueAction=[!SetOption 1 Text "Get the supporter version"][!SetOption 1 LeftMouseDownAction """["https://gumroad.com/l/droptop"]#*CloseSettingsMenu*#"""]

[ThemeImageContainer]
Meter=Shape
Shape=Rectangle 0,0,(#DropdownMenuWidth#+2-(#DropdownCutout#*2)),84,#BGCorner# | Fill Color 0,0,0 | StrokeWidth 0
X=#DropdownCutout#r
Y=([Background:YH]+(#DropdownCutout#+(2*#DroptopSize#))+1)
DynamicVariables=1

[ThemeImage]
Meter=Image
ImagePath="#@#ThemeImages\"
ImageName=#SettingsMenuIndex#
Container=ThemeImageContainer