//コピペ推奨プログラム
#include "DxLib.h"

int LoopProcess() {
	ScreenFlip();
	if (ProcessMessage() != 0) { return 0; }
	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { return 0; }
	ClearDrawScreen();
	return 1;
}
int AllInit() {
	ChangeWindowMode(TRUE); //ウィンドウ表示
	SetMainWindowText("GameCreativeWorks"); //ウィンドウタイトル
	SetGraphMode(800, 600, 16); //ウィンドウサイズ
	SetFontSize(20); //利用フォントサイズ
	if (DxLib_Init() < 0) { return -1; }
	SetDrawScreen(DX_SCREEN_BACK); //描画対象
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	if (AllInit() == -1) { return -1; }//DxLib初期化関連

	//初期化関連
	int i, j;
	//メインループ
	while (LoopProcess()) {
		DrawFormatString(0, 0, GetColor(255, 255, 255), "九九");
		for (i = 1; i <= 9; i++) {

			for (j = 1; j <= 9; j++) {
				DrawFormatString(i * 30, j * 30, 0xffffff, "%d", i*j);
			}
				
		}
	}

	DxLib_End();//終了処理
	return 0;
}