# 2021 gcw プログラミング講習会

※内容について、入れたほうがいい、外したほうがいい、
これはもっと後にやるべき等意見があればissueなりpullreqなりください

vscodeを使ってる人(文字コードがutf-8の人)はpowershellなりcmdなり使うときに```chcp 65001```を使っておくと文字化けが無くなる（はず）

または、vscodeのsetting.jsonに以下を追加してください
```json
"terminal.integrated.shellArgs.windows": [
    "-NoExit",
    "chcp 65001",
]
```

## 内容

### 第1回

以下のソフトのインストール（リンクはすべて別サイトに飛びます）
- [VisualStudioComminity2019](https://visualstudio.microsoft.com/ja/downloads/)
- [VisualStudioCode](https://azure.microsoft.com/ja-jp/products/visual-studio-code/)
- [gcc/mingw](http://mingw-w64.org/doku.php/download/mingw-builds)（情報のみ）
- [Unity](https://unity3d.com/jp/get-unity/download)

gcc+vscodeの使い方<br>
VisualStudioの使い方

C言語でHello World => [L01_01_hello.c](L01_01_hello.c)

変数型についての説明 => [L01_02_type.c](L01_02_type.c)<br>
　-> 説明が下手だったので次回説明しなおしかなぁ

-----

### 第2回

変数について

変数宣言

型について
- int
- float
- double
- char

初期化について

キャストについて

基本演算子( + - * / % )について

-----

### 第3回

if(else)文

比較演算子

while文

for文

rand()

do-while文

scanf()

switch

#defineについて<br>
=> マジックナンバーについて

お試しでじゃんけんゲーム作成

-----

### 第4回

関数

配列

ポインタについて<vr>
=> 話のみ

関数の値渡しとポインタ渡し

配列とポインタを利用したイテレータ<br>
=> 話のみ<br>
=> 自分でもよく理解していないのでパス

構造体

-----

### 第5回

c#

class
