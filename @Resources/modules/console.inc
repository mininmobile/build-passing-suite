[tabStyle]
w = 150
h = 40
x = 150r
y = 20
stringAlign = centerCenter
stringCase = #fontCasing#
fontFace = #font#
fontSize = (14 * #scale#)
fontColor = #color#
solidColor = #background#
antiAlias = 1

[tabSelectedStyle]
fontColor = #color2#
solidColor = #background2#

[textHeaderStyle]
x = 30
y = 60
inlineSetting = underline
stringCase = #fontCasing#
stringStyle = italic
fontFace = #font#
fontSize = (32 * #scale#)
fontColor = #color2#
antiAlias = 1

[textStyle]
x = r
y = ((16 * #scale#) + (6 * #scale#))r
prefix = "  "
stringCase = #fontCasing#
fontFace = #font#
fontSize = (16 * #scale#)
fontColor = #color2#
antiAlias = 1

[linkStyle]
x = r
y = ((16 * #scale#) + (6 * #scale#))r
prefix = "  "
stringCase = #fontCasing#
fontFace = #font#
fontSize = (16 * #scale#)
fontColor = #color2#
antiAlias = 1
mouseOverAction = [!setOption #CURRENTSECTION# prefix ">"][!update]
mouseLeaveAction = [!setOption #CURRENTSECTION# prefix "  "][!update]

[linkSelectedStyle]
prefix = ">"
mouseOverAction = [!setOption #CURRENTSECTION# prefix ">"][!update]
mouseLeaveAction = [!setOption #CURRENTSECTION# prefix ">"][!update]

; color settings

[colorBox]
x = r
y = ((16 * #scale#) + (16 * #scale#))r
boxOptions =  strokeColor 255, 255, 255 | strokeWidth 2
solidColor = 255, 255, 255
