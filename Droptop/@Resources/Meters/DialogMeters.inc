[Rainmeter]
OnFocusAction=[!SetVariable FocusedGroup #FocusGroup# "Droptop\Other\BackgroundProcesses"][!UpdateMeasure CompareFocused "Droptop\Other\BackgroundProcesses"]
OnUnfocusAction=[!SetVariable FocusedGroupPrev #FocusGroup# "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
Group=DroptopSuite
SkinWidth=((100*#DroptopSize#)+(#StrokeWidth2#*2))
OnRefreshAction=[!Show][!CommandMeasure MeasureSliders "Execute 1"]
RightMouseDownAction=[]
MouseActionCursor=0
Update=100

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=0
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=250
DefaultClickThrough=0
DefaultKeepOnScreen=0
DefaultAutoSelectScreen=0

[Variables]
SlideVar=0
SlideOpac=0

W=15
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]

Blur=0

FocusGroup=DropdownMenus

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=#Blur#
Type=[#BlurType[#BlurTypeNum]]
DynamicVariables=1
Group=Animation
Border=[#DropdownShadow[#ShadowsON]]

;---

[RunConfirm]
Measure=Plugin
Plugin=RunCommand
Parameter=
State=Hide
OutputType=ANSI
OutputFile=

[RunAbort]
Measure=Plugin
Plugin=RunCommand
Parameter=shutdown.exe /a
State=Hide
OutputType=ANSI
OutputFile=

;---

[MeasureSliders]
Measure=Plugin
Plugin=ActionTimer
Group=Animation
ActionList1=Start1|Repeat SlideOut,#W#,10|Finish
Start1=
SlideOut=[!SetVariable SlideVar "(Clamp(#SlideVar#+5,0,50))"][!SetVariable SlideOpac "(Clamp(#SlideOpac#+0.1,0,1))"]#U#
Finish=[!#DropdownBlurAction#][!SetVariable Blur #DropdownBlur#][!SetVariable SlideVar 50][!SetVariable SlideOpac 1][!SetOption BlurBehind DynamicVariables 0]#U#
ActionList2=Start2|Repeat SlideIn,#W#,10|Terminate
Start2=[!HideBlur][!HideMeter Action][!SetOption Icon1 ImageTint "#*SuperColor*#"][!SetOption Icon2 ImageTint "#*SuperColor*#"][!HideMeterGroup ButtonBG]
SlideIn=[!SetVariable Blur 0][!SetOption BlurBehind DynamicVariables 1][!HideMeterGroup Text][!SetVariable SlideVar "(Clamp(#SlideVar#-5,0,50))"][!SetVariable SlideOpac "(Clamp(#SlideOpac#-0.1,0,1))"]#U#
Terminate=[!Hide][!DeactivateConfig]
DynamicVariables=1
UpdateDivider=-1
IgnoreWarnings=1

[IconStyle]
Meter=Image
ImageTint=#SuperColor#
ImageAlpha=(255*#SlideOpac#)
W=(55*#DroptopSize#)
H=(55*#DroptopSize#)
X=((([Background:W]-[#CURRENTSECTION#:W])-([#CURRENTSECTION#:W]/2))+(5*#DroptopSize#))
DynamicVariables=1

[InfoStyle]
StringAlign=Center
X=(((#SlideVar#*2)*#DroptopSize#)/2)
Y=(-7*#DroptopSize#)R
W=((#SlideVar#*2)*#DroptopSize#)
FontFace=#UniversalFont#
FontColor=#SuperColor#,(255*#SlideOpac#)
DynamicVariables=1
FontSize=(12*#DroptopSize#)
Antialias=1

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownCutout#,#DropdownCutout#,((#SlideVar#*2)*#DroptopSize#),(175*#DroptopSize#),#BGCorner# | Fill Color #ToolbarBG1#,(#ToolbarOpacity1#*#SlideOpac#) | StrokeWidth #StrokeWidth2# | Stroke Color #StrokeColor2#,(#ToolbarOpacity1#*#SlideOpac#)
LeftMouseDownAction=[]
DynamicVariables=1
Group=Animation

[Button1BG]
Meter=Shape
Shape=Rectangle (#DropdownCutout#/2),(#DropdownCutout#/2),([Background:W]-(10*#DroptopSize#)-#StrokeWidth2#),(65*#DroptopSize#),(5*#DroptopSize#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color #ToolbarHL#,0
X=((5*#DroptopSize#)+(#StrokeWidth2#/2))
Y=(15*#DroptopSize#)
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #*ToolbarHL*#,#ToolbarHLO#][!SetOption Icon1 ImageTint "#*SuperColor2*#"][!SetOption Text1 FontColor "#*SuperColor2*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Button1][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #*ToolbarHL*#,0][!SetOption Icon1 ImageTint "#*SuperColor*#"][!SetOption Text1 FontColor "#*SuperColor*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Button1][!Redraw]
DynamicVariables=1
Group=Animation | Button1 | ButtonBG

[Button2BG]
Meter=Shape
Shape=Rectangle (#DropdownCutout#/2),(#DropdownCutout#/2),([Background:W]-(10*#DroptopSize#)-#StrokeWidth2#),(65*#DroptopSize#),(5*#DroptopSize#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color #ToolbarHL#,0
X=((5*#DroptopSize#)+(#StrokeWidth2#/2))
Y=(95*#DroptopSize#)
LeftMouseDownAction=[!CommandMeasure RunAbort "Run"][!CommandMeasure MeasureSliders "Execute 2"]
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #*ToolbarHL*#,#ToolbarHLO#][!SetOption Icon2 ImageTint "#*SuperColor2*#"][!SetOption Text2 FontColor "#*SuperColor2*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Button2][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #*ToolbarHL*#,0][!SetOption Icon2 ImageTint "#*SuperColor*#"][!SetOption Text2 FontColor "#*SuperColor*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Button2][!Redraw]
DynamicVariables=1
Group=Animation | Button1 | ButtonBG

[Icon1]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#Dialog\#Activity#.png
Group=Animation | Button1
Y=(10*#DroptopSize#)

[Text1]
Meter=String
MeterStyle=InfoStyle
Group=Animation | Button1 | Text
Text=[#PowerMenu[#Activity]]

[Icon2]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#Dialog\Cancel.png
Group=Animation | Button2
Y=(90*#DroptopSize#)

[Text2]
Meter=String
MeterStyle=InfoStyle
Group=Animation | Button2 | Text
Text=#PowerCancel#
