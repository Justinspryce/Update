chcp 950

@echo off

set gamesfol1="瀏覽器遊戲"
set gamesfol2="活動"
set gamesfol3="休閒"
set gamesfol4="遊戲"
set gamesfol5="本地多人"
set gamesfol6="線上多人"
set gamesfol7="模擬"
set gamesfol8="運動和賽車"
set gamesfol9="VR (虛擬實境)"
set gamescamfol1="動作"
set gamescamfol2="恐怖"
set gamescamfol3="放鬆"
set gamescamfol4="RPG"
set gamescamfol5="生存"
set gameslocfol1="合作"
set gameslocfol2="派對"
set gameslocfol3="對戰"
set gamesonlfol1="戰鬥"
set gamesonlfol2="MMO"
set gamesonlfol3="射擊"
set gamesonlfol4="策略"

set newsmediafol1="左方"
set newsmediafol2="右方"
set newsmediafol3="國際"

set onlinetools1fol="診斷"

set podcastsfol1="罪案與戲劇"
set podcastsfol2="政治"
set podcastsfol3="科學和科技"
set podcastsfol4="性和心理學"
set podcastsfol5="運動"
set podcastsfol6="談論節目"

set bookmarksfol1="新聞和媒體"
set bookmarksfol2="在線工具"
set bookmarksfol3="電臺"
set bookmarksfol4="購物"
set bookmarks1="Facebook"
set bookmarks2="Gmail"
set bookmarks3="Google Keep"
set bookmarks4="Google Maps"
set bookmarks5="Google Photos"
set bookmarks6="Hulu"
set bookmarks7="Netflix"
set bookmarks8="Reddit"
set bookmarks9="Steam"
set bookmarks10="Twitch"
set bookmarks11="YouTube"

set advanced1="命令提示符"
set advanced2="裝置管理員"
set advanced3="磁碟清理"
set advanced4="磁碟管理"
set advanced5="註冊表編輯器"
set advanced6="資源檢測器"
set advanced7="自動?動應用程式"
set advanced8="存儲空間"
set advanced9="系統配置"
set advanced10="Windows 防火牆"
set advanced11="Windows PowerShell"
set advanced12="Windows 服務"
"
set controlfol1="進階控制"
set control1="桌面背景"
set control2="顯示設定"
set control3="放大"
set control4="軟鍵盤"
set control5="能量選項"
set control6="資源回收桶"
set control7="轉換螢幕"
set control8="系統資訊"
set control9="工作管理員"
set control10="解除安裝"
set control11="用戶賬戶"
"
set advancedseven1="命令提示符"
set advancedseven2="裝置管理員"
set advancedseven3="磁碟清理"
set advancedseven4="磁碟管理"
set advancedseven5="註冊表編輯器"
set advancedseven6="資源檢測器"
set advancedseven7="存儲空間"
set advancedseven8="系統配置"
set advancedseven9="Windows 防火牆"
set advancedseven10="Windows PowerShell"
set advancedseven11="Windows 服務"
"
set controlsevenfol1="進階控制"
set controlseven1="桌面背景"
set controlseven2="顯示設定"
set controlseven3="放大"
set controlseven4="軟鍵盤"
set controlseven5="能量選項"
set controlseven6="資源回收桶"
set controlseven7="轉換螢幕"
set controlseven8="系統資訊"
set controlseven9="解除安裝"
set controlseven10="用戶賬戶"

cd %~dp0

call "RenameShortcuts.bat"