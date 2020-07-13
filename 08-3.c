#include <stdio.h>

int main() {
    char str[64+1+1];
    char target[20+1+1];
    char substitution[20+1+1];
    char replacement[64*20+1];
    int str_len, target_len, substitution_len;
    int i, j, k, l;

    printf("文字列 str (64文字まで) ?: ");
    fgets(str,66,stdin);
    printf("文字列 target (20文字まで) ?: ");
    fgets(target,22,stdin);
    printf("文字列 substitution (20文字まで) ?: ");
    fgets(substitution,22,stdin);

    // targetとsubstitutionの文字数の取得
    for (i=0;str[i]!='\n';i++) {}
    str_len = i;
    for (i=0;target[i]!='\n';i++) {}
    target_len = i;
    for (i=0;substitution[i]!='\n';i++) {}
    substitution_len = i;

    /*
        i -> 参照しているstrの文字の位置
        j -> strとtargetを比較するときなどに使用されるインクリメント
        k -> 文字が同じかを調べるためのインクリメント
        l -> replacementの文字の位置
    */

    i = 0;
    l = 0;

    // strの文字を1文字ずつ調べる
    // ループ
    for (i=0;i<str_len;i++) {
        // targetの最初の文字がstrに登場した時、置き換えをができるかを調べる
        if (target[0]==str[i]) {
            k = 0;
            for (j=0;j<target_len;j++) {
                // targetの文字数だけstrとtargetの文字を比較する
                if (str[i+j]==target[j]) {
                    // 一致したときk++
                    k++;
                }
            }
            // kの数がtargetの文字数=>strに中にtargetが存在する=>置換を行う
            if (target_len==k) {
                for (j=0;j<substitution_len;j++) {
                    replacement[l+j]=substitution[j];
                }
                i+=target_len-1;
                l+=substitution_len;
            } else {
                replacement[l] = str[i];
                l++;
            }
        } else {
            replacement[l] = str[i];
            l++;
        }
    }

    printf("置換後 : %s\n", replacement);

    return 0;
}
