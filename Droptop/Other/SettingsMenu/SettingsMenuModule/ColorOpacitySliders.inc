[Rainmeter]

[Variables]

SettingsMenuNumber=1.2.1

; -------------------------

Slider1=1
Slider2=2
Slider3=3
Slider4=4

SliderText1=1
SliderText2=2
SliderText3=3
SliderText4=4

; -------------------------

SliderColorMode1=1
SliderColorMode2=1
SliderColorMode3=1
SliderColorMode4=0

SliderColorMode=0

; -------------------------

SliderMin2.1=0
SliderMin2.2=0
SliderMin2.3=0
SliderMin2.4=0

SliderMin3.1=0
SliderMin3.2=0
SliderMin3.3=0
SliderMin3.4=50

SliderMin4.1=0
SliderMin4.2=0
SliderMin4.3=0
SliderMin4.4=0

SliderMin5.1=0
SliderMin5.2=0
SliderMin5.3=0
SliderMin5.4=50

SliderMin6.1=0
SliderMin6.2=0
SliderMin6.3=0
SliderMin6.4=0

SliderMin7.1=0
SliderMin7.2=0
SliderMin7.3=0
SliderMin7.4=50

; -------------------------

Selected=1

Color2.1=BGColor1
Color2.2=BGColor2
Color2.3=BGColor3
Opacity2.1=BGOpacity1
Opacity2.2=BLANK

Color3.1=TopBarFontColor1
Color3.2=TopBarHomeIconColor
Color3.3=AssistantIconTint
Opacity3.1=TitleOpacity
Opacity3.2=BLANK

Color4.1=ToolbarBG1
Color4.2=BLANK
Color4.3=BLANK
Opacity4.1=ToolbarOpacity1
Opacity4.2=BLANK

Color5.1=SuperColor
Color5.2=BLANK
Color5.3=BLANK
Opacity5.1=DropdownItemOpacity
Opacity5.2=BLANK

Color6.1=ToolbarHL
Color6.2=TopBarHL
Color6.3=BLANK
Opacity6.1=ToolbarHLO
Opacity6.2=TopBarHLO

Color7.1=SuperColor2
Color7.2=TopBarFontColor2
Color7.3=AssistantIconTint2
Opacity7.1=HLTextOpacity
Opacity7.2=BLANK

; -------------------------

SliderPartition1=[RedParititonCalc]
SliderPartition2=[GreenParititonCalc]
SliderPartition3=[BlueParititonCalc]

SliderPartition4=[#[#Opacity[#SettingsMenuIndex].1]]

; -------------------------

SliderOutput1=[#*SliderPartition1*],[#*SliderPartition2*],[#*SliderPartition3*]
SliderOutput2=[#*SliderPartition1*],[#*SliderPartition2*],[#*SliderPartition3*]
SliderOutput3=[#*SliderPartition1*],[#*SliderPartition2*],[#*SliderPartition3*]

SliderOutput4=[SliderMouseXCalc]

; -------------------------

SliderColor1=255,0,0
SliderColor2=0,255,0
SliderColor3=0,0,255

SliderColor4=200,200,200

; -------------------------

SliderActive=0

; ---

SliderColorAction0=[!WriteKeyValue Variables [#Opacity[#SettingsMenuIndex].1] [#*SliderPartition4*] "#@#Themes\#ThemeNum#.inc"][!WriteKeyValue Variables [#Opacity[#SettingsMenuIndex].2] [#*SliderPartition4*] "#@#Themes\#ThemeNum#.inc"]

SliderColorAction1=[!WriteKeyValue Variables [#Color[#SettingsMenuIndex].1] "[#SliderOutput[#*Selected*]]" "#@#Themes\#ThemeNum#.inc"][!WriteKeyValue Variables [#Color[#SettingsMenuIndex].2] "[#SliderOutput[#*Selected*]]" "#@#Themes\#ThemeNum#.inc"][!WriteKeyValue Variables [#Color[#SettingsMenuIndex].3] "[#SliderOutput[#*Selected*]]" "#@#Themes\#ThemeNum#.inc"]

; ---

SliderDeactivateAction0=[!SetOption [#*CURRENTSECTION*] FillColor "Fill Color [#SliderColor[##*CURRENTSECTION*#]],75"][!SetOption [#*CURRENTSECTION*] KnobColor "Fill Color 255,255,255,185"]

SliderDeactivateAction1=[!SetVariable SliderActive 0][#SliderColorAction[#*SliderColorMode*]][!DisableMeasure SliderMouseXCalc]

; -------------------------

[RedParititon]
Measure=String
String=[#[#Color[#SettingsMenuIndex].1]]
RegExpSubstitute=1
Substitute="^(.*),(.*),(.*)$":"\1"
OnChangeAction=[!UpdateMeasure RedParititonCalc]
Group=ColorVars | MouseMove

[GreenParititon]
Measure=String
String=[#[#Color[#SettingsMenuIndex].1]]
RegExpSubstitute=1
Substitute="^(.*),(.*),(.*)$":"\2"
OnChangeAction=[!UpdateMeasure GreenParititonCalc]
Group=ColorVars | MouseMove

[BlueParititon]
Measure=String
String=[#[#Color[#SettingsMenuIndex].1]]
RegExpSubstitute=1
Substitute="^(.*),(.*),(.*)$":"\3"
OnChangeAction=[!UpdateMeasure BlueParititonCalc]
Group=ColorVars | MouseMove

;---

[RedParititonCalc]
Measure=Calc
Formula=[RedParititon]
DynamicVariables=1
UpdateDivider=-1
Group=ColorVars | MouseMove

[GreenParititonCalc]
Measure=Calc
Formula=[GreenParititon]
DynamicVariables=1
UpdateDivider=-1
Group=ColorVars | MouseMove

[BlueParititonCalc]
Measure=Calc
Formula=[BlueParititon]
DynamicVariables=1
UpdateDivider=-1
Group=ColorVars | MouseMove

;---

[MeasureMouseX]
Measure=Plugin
Plugin=MouseXY
Dimension=X
Group=MouseMove

[SliderMouseXCalc]
Measure=Calc
Formula=Round(Clamp(((MeasureMouseX-#CURRENTCONFIGX#-#HighlightXOffset#-#DropdownMenuHeight#-2)/(0.815*#DroptopSize#)),[#SliderMin[#SettingsMenuIndex].[#Selected]],255),0)
OnUpdateAction=[!SetVariable SliderPartition#Selected# [#CURRENTSECTION#]][!SetOption SliderText#Selected# Text "[#CURRENTSECTION#]"][!SetVariable [#[#Color[#SettingsMenuIndex].1]] "[#SliderOutput[#Selected]]"][!SetVariable [#[#Color[#SettingsMenuIndex].2]] "[#SliderOutput[#Selected]]"][!SetVariable [#[#Color[#SettingsMenuIndex].3]] "[#SliderOutput[#Selected]]"][!SetOption #SettingsMenuIndex#Icon ImageTint "#SliderPartition1#,#SliderPartition2#,#SliderPartition3#" "Droptop\Other\SettingsMenu\SettingsMenu2"][!Delay 10][!UpdateMeasureGroup MouseMove][!UpdateMeterGroup MouseMove][!UpdateMeter #SettingsMenuIndex#Icon "Droptop\Other\SettingsMenu\SettingsMenu2"][!Redraw "Droptop\Other\SettingsMenu\SettingsMenu2"][!Redraw]
DynamicVariables=1
Disabled=1
Group=MouseMove

; -------------------------

[InfoStyle]
StringAlign=CenterCenter
FontColor=0,0,0,185
FontFace=[#FontName[#ThemeNum][#AltFont[#LanguageNum]]]
FontSize=#DropdownMenuFontSize#
InlineSetting=
FontWeight=#FontWeight#
Padding=0,0,0,0
AntiAlias=#DropdownAntiAlias#
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=
DynamicVariables=1
ClipString=1
X=((#DropdownCutout#+#HighlightXOffset#)+((#DropdownMenuWidth#-((#DropdownCutout#+#HighlightXOffset#)*2)-(#DropdownMenuHeight#*2))*([#SliderPartition[##CURRENTSECTION#]]/255))+#DropdownMenuHeight#)
Y=([Slider[##CURRENTSECTION#]:Y]+(#DropdownMenuHeight#/2))
W=(#DropdownMenuHeight#*2)
H=#DropdownMenuHeight#
FontColor=0,0,0,185
Text=[#SliderPartition[##CURRENTSECTION#]]
Group=MouseMove | SliderText

[SliderStyle]
Shape=Rectangle (#DropdownCutout#+#HighlightXOffset#),0,(#DropdownMenuWidth#-(#DropdownCutout#*2)-(#HighlightXOffset#*2)),#DropdownMenuHeight#,#HLCorner# | StrokeWidth 1 | Stroke Color 0,0,0,55 | Extend FillColor
Shape2=Rectangle ((#DropdownCutout#+#HighlightXOffset#)+((#DropdownMenuWidth#-((#DropdownCutout#+#HighlightXOffset#)*2)-(#DropdownMenuHeight#*2))*([#SliderPartition[##CURRENTSECTION#]]/255))),0,(#DropdownMenuHeight#*2),#DropdownMenuHeight#,#HLCorner# | StrokeWidth 1 | Stroke Color 0,0,0,55 | Extend KnobColor
FillColor=Fill Color [#SliderColor[##CURRENTSECTION#]],75
KnobColor=Fill Color 255,255,255,185
LeftMouseDownAction=[!SetVariable SliderActive 1][!SetVariable Selected [##CURRENTSECTION#]][!SetVariable SliderColorMode [#SliderColorMode[##CURRENTSECTION#]]][!EnableMeasure SliderMouseXCalc][!UpdateMeasureGroup MouseMove][!UpdateMeterGroup MouseMove]
LeftMouseUpAction=#OptionChanged#[#SliderDeactivateAction[#SliderActive]][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=#OptionChanged#[#SliderDeactivateAction[#SliderActive]][!SetOption [#CURRENTSECTION] FillColor "Fill Color [#SliderColor[##CURRENTSECTION#]],75"][!SetOption [#CURRENTSECTION] KnobColor "Fill Color 255,255,255,185"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color [#SliderColor[##CURRENTSECTION#]],255"][!UpdateMeter #CURRENTSECTION#][!SetOption #CURRENTSECTION# KnobColor "Fill Color 255,255,255,245"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
X=1
Y=R
Group=MouseMove | SliderBar

; -------------------------

[1]
FontColor=0,0,0,0

[2]
FontColor=0,0,0,0

[3]
FontColor=0,0,0,0

[4]
FontColor=0,0,0,0

; -------------------------

[Slider1]
Meter=Shape
MeterStyle=SliderStyle
X=1
Y=[1:Y]

[Slider2]
Meter=Shape
MeterStyle=SliderStyle

[Slider3]
Meter=Shape
MeterStyle=SliderStyle

; -------------------------

[4]
Y=(#DividerSpace#*2)R

[4Icon]
Y=(#DividerSpace#*2)R

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownMenuHeight#*3)+2)

[Slider4]
Meter=Shape
MeterStyle=SliderStyle
Y=(#DividerSpace#*2)R

; -------------------------

[SliderText1]
Meter=String
MeterStyle=InfoStyle

[SliderText2]
Meter=String
MeterStyle=InfoStyle

[SliderText3]
Meter=String
MeterStyle=InfoStyle

[SliderText4]
Meter=String
MeterStyle=InfoStyle