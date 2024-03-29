[Rainmeter]

[Variables]

[CheckPresetColor]
Measure=Calc
IfCondition=#LockPresetColor#=1
IfTrueAction=[!SetOption 1 FontColor "#*SuperColor*#,75"][!SetOption 1Icon ImageAlpha 75][!SetOption 1Icon ImageName "#@#FixedIcons\#IconSize#\x.png"][!DisableMouseAction 1 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!UpdateMeter *][!Redraw]


[InfoStyleB]
MouseOverAction=[!SetVariable CurrentFolder #CURRENTSECTION#][!UpdateMeasure MeasureSliders#AnimationOFF#][!CommandMeasure MeasureSliders#AnimationOFF# "Execute 1"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor2*#,#HLTextOpacity#"][!SetOption #CURRENTSECTION#Folder FontColor #*SuperColor2*#][!SetOption #CURRENTSECTION# FontColor "#*SuperColor2*#,#HLTextOpacity#"][!ShowMeterGroup Highlight][!SetOptionGroup Highlight Y [#CURRENTSECTION#:Y]][!SetOptionGroup Highlight W [#CURRENTSECTION#:W]][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor*#,#DropdownItemOpacity#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Folder FontColor #*SuperColor*#][!SetOption #CURRENTSECTION# FontColor "#*SuperColor*#,#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]

[FolderBlock]
H=(#DropdownMenuHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DropdownMenuHeight#*1)+(#DividerSpace#*2))

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownMenuHeight#*1)-1)

[2]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R

[2Icon]
Y=(#DividerSpace#*2)R
ImageTint=#BGColor1#

[2Arrow]
Y=(#DividerSpace#*2)R
ImageTint=#BGColor1#

[3]
MeterStyle=InfoStyle | InfoStyleB

[3Icon]
ImageTint=#TopBarFontColor1#

[4]
MeterStyle=InfoStyle | InfoStyleB

[4Icon]
ImageTint=#ToolbarBG1#

[5]
MeterStyle=InfoStyle | InfoStyleB

[5Icon]
ImageTint=#SuperColor#

[6]
MeterStyle=InfoStyle | InfoStyleB

[6Icon]
ImageTint=#ToolbarHL#

[7]
MeterStyle=InfoStyle | InfoStyleB

[7Icon]
ImageTint=#SuperColor2#

[1Arrow]
Shape=

[7Arrow]
Hidden=0