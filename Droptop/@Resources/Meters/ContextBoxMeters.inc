[Rainmeter]
OnFocusAction=[!SetVariable FocusedGroup #FocusGroup# "Droptop\Other\BackgroundProcesses"][!UpdateMeasure CompareFocused "Droptop\Other\BackgroundProcesses"]
OnUnfocusAction=[!SetVariable FocusedGroupPrev #FocusGroup# "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
Group=DroptopSuite | ContextBox
SkinWidth=(#DropdownMenuWidth#+2)
MouseActionCursor=0
LeftMouseDownAction=[]
RightMouseDownAction=[]
Blur=#DropdownBlur#
Update=-1

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=0
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=0

[Variables]
FocusGroup=DropdownMenus

;-----------------------------------
Padding0=(#HideIcons#=1?#NoIconPadding#:#DropdownPadding#),#DropdownPaddingY#,#DropdownPadding2#,(#DropdownPaddingY#*-1)
Padding1=0,#DropdownPaddingY#,0,(#DropdownPaddingY#*-1)
;---
Padding0B=(#HideIcons#=1?#NoIconPadding#:#DropdownPadding#),#DropdownPaddingY#,#DropdownPadding2#,(#DropdownPaddingY#*-1)
Padding1B=#DropdownPadding2#,#DropdownPaddingY#,(#HideIcons#=1?#NoIconPadding#:#DropdownPadding#),(#DropdownPaddingY#*-1)
;-----------------------------------

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=#DropdownBlur#
Type=[#BlurType[#BlurTypeNum]]
Border=[#DropdownShadow[#ShadowsON]]
UpdateDivider=-1

[MeasureSliders1]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait #FolderMouseOverTime#|FolderMouseOver
FolderMouseOver=
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
FontColor=#SuperColor#,#DropdownItemOpacity#
FontFace=[#FontName[#ThemeNum][#AltFont[#LanguageNum]]]
FontSize=#DropdownMenuFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#

[ItemStyle]
StringAlign=#TextDirection#Center
MouseOverAction=[!SetOption #CURRENTSECTION#Icon ImageTint "#*SuperColor2*#,(255-(255*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor2*#"][!SetOption #CURRENTSECTION# FontColor "#*SuperColor2*#"][!ShowMeterGroup Highlight][!SetOptionGroup Highlight Y [#CURRENTSECTION#:Y]][!SetOptionGroup Highlight W [#CURRENTSECTION#:W]][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*SuperColor*#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION# FontColor "#*SuperColor*#,#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]
Padding=[#Padding[#RTLText]B]
W=(#DropdownMenuWidth#-#DropdownPadding2#-#DropdownPadding#+(#DropdownPadding#*#HideIcons#))
H=#DropdownMenuHeight#
DynamicVariables=1
ClipString=1
Group=Items
X=(1+(#DropdownMenuWidth#*#RTLText#))
Y=R
Hidden=(#NumberOfItems# >= #CURRENTSECTION# ? 0 : 1)

[FolderStyle]
MouseOverAction=[!SetOption MeasureSliders#AnimationOFF# FolderMouseOver """[PlayStop][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [#CURRENTSECTION#:Y]][!Hide "#CURRENTCONFIG#\Folder"][!DeactivateConfig "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CURRENTSECTION#.ini"][!Move (#WindowPos#+#DropdownMenuWidth#+#SubMenuXOffset#+(([#SCREENAREAWIDTH[#MonitorNum]]+[#SCREENAREAWIDTH[#MonitorNum]])*#Xnum#)+#WORKAREAX#+#BarXposOffset#) (#CURRENTCONFIGY#+[#CURRENTSECTION#Icon:Y]-#DropdownTopBottomSpacing#) "#CURRENTCONFIG#\Folder"][!#Show# "#CURRENTCONFIG#\Folder"][!UpdateMeter HighlightSelected][!Redraw]"""][!UpdateMeasure MeasureSliders#AnimationOFF#][!CommandMeasure MeasureSliders#AnimationOFF# "Execute 1"]   [!SetOption #CURRENTSECTION# FontColor "#*SuperColor2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*SuperColor2*#,(255-(255*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor2*#"][!ShowMeterGroup Highlight][!SetOptionGroup Highlight Y [#CURRENTSECTION#:Y]][!SetOptionGroup Highlight W [#CURRENTSECTION#:W]][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
MouseLeaveAction=[!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*SuperColor*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*SuperColor*#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor*#,#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]

@Include=#@#Meters\ArrowStyle\ArrowStyle#ArrowStyle#.ini

[IconStyle]
X=r
Y=#DropdownIconSpacing#R
W=#IconW#
H=#IconH#
ImageTint=#SuperColor#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))
Greyscale=#Greyscale#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
DynamicVariables=1
Group=Items

[BackgroundStyle]
LeftMouseDownAction=[]

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownCutout#,#DropdownCutout#,(#DropdownMenuWidth#+2-(#DropdownCutout#*2)),(#DropdownMenuHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((10*#DroptopSize#)+(3*#DroptopSize#))*#NumberOfDividers#)),#BGCorner# | Fill Color #ToolbarBG1#,(#ToolbarOpacity1#<1?1:#ToolbarOpacity1#) | StrokeWidth #StrokeWidth2# | Stroke Color #StrokeColor2#
DynamicVariables=1

;----------------------------------------------------
; Item Highlight
	
[HighlightContainer]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle (#DropdownCutout#+#HighlightCutout#),(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#),(#DropdownMenuWidth#+2-(#DropdownCutout#*2)-(#HighlightCutout#*2)),(#DropdownMenuHeight#*#NumberOfItems#+(((10*#DroptopSize#)+(3*#DroptopSize#))*#NumberOfDividers#)),#HLContainerCorner# | Fill Color 255,0,0 | StrokeWidth 0
UpdateDivider=-1
	
[HighlightBackground]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle (#DropdownCutout#+#HighlightXOffset#),0,(#DropdownMenuWidth#-(#DropdownCutout#*2)-(#HighlightXOffset#*2)),#DropdownMenuHeight#,#HLCorner# | Fill Color #ToolbarHL#,#ToolbarHLO# | StrokeWidth 0
X=1
UpdateDivider=-1
Group=Highlight
Hidden=1
Container=HighlightContainer

[HighlightSelected]
Meter=Shape
Shape=Rectangle (((#DropdownCutout#+#HighlightXOffset#)+(#DropdownMenuWidth#-(#DropdownCutout#*2)-(#HighlightXOffset#*2))-#ArrowHighlightW#)*((#RTLText#-1)*-1)+((#DropdownCutout#+#HighlightXOffset#)*#RTLText#)),(#StrokeWidth#-#SelectedSizeOffset#),#ArrowHighlightW#,(#DropdownMenuHeight#-(#StrokeWidth#*2)+(#SelectedSizeOffset#*2)),#HLCorner# | Fill Color #ToolbarHL#,#ToolbarHLO2# | StrokeWidth #StrokeWidth# | Stroke Color #StrokeColor1# | Skew #DropdownHLSkew#,0
X=1
Y=#HighlightSelectedY#
Group=HighlightSelected
DynamicVariables=1
Hidden=1
Container=HighlightContainer
