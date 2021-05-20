#include<stdio.h>

int main() {
	int a = 4;
	int b = 8;

	//if(条件文){} : 条件を満たしていたら中身を実行する
	if (a >= 5) {
		printf("aは5以上である,a=%d\n",a);
	}
	//else if(条件文) : 上のif()が条件を満たしていないでelse if()の条件を満たしているとき実行する
	//else if()は複数作ることができ下の else if() であるほど条件が厳しくなる
	else if (b >= 5) {
		printf("bは5以上である,b=%d\n",b);
	}
	//else : if(),else if()の条件を満たさなかった場合実行する (else if()はない場合がある)
	else {
		printf("a,bともに5以下である,a=%d,b=%d\n",a,b);
	}

	return 0;
}

//条件文の例
// < , > , =< , => 大小比較   == 合同(=では代入なので条件では使われない)
// 複数の条件を同時に検証したいとき
//(A && B) AかつBのとき  (A || B) AまたはBのとき