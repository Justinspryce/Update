[Rainmeter]

[Variables]
DropdownPadding=#NoIconPadding#

[NumberOfInputFields]
Measure=Calc
Formula=#NumberOfItems#
IfBelowValue=4
IfBelowAction=[!HideMeter 2]

[1]
SolidColor=#SuperColor#,128
FontColor=#ToolbarBG1#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #SuperColor#,165][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #SuperColor#,128][!UpdateMeter #CURRENTSECTION#][!Redraw]

[2]
SolidColor=#SuperColor#,128
FontColor=#ToolbarBG1#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #SuperColor#,165][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #SuperColor#,128][!UpdateMeter #CURRENTSECTION#][!Redraw]
Y=(1*#DroptopSize#)R

[3]
FontColor=#SuperColor#,128
MouseOverAction=[]
MouseLeaveAction=[]
Y=(#DropdownMenuHeight#*(#NumberOfItems#-2)+((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#))
Hidden=0

[4]
Hidden=0