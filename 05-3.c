#include <stdio.h>

int sum(int num);   //各桁を足し合わせる関数

int main() {
    int year, month, day, unmei, unsei;

    //生年月日の入力
    printf("\n西暦で生年月日を入力してください ex) 1998 4 1\n");
    scanf("%d %d %d", &year, &month, &day);

    //エラー処理
	if (month>12||month<0||day>31||day<0) {
		printf("不正な値が入力されました。\n\n");
		return 1;
    }

    //年の合計
    while (year>9) {
        if (year==11||year==22||year==33||year==44||year==55||year==66||year==77||year==88||year==99) {
            break;
        } else {
            year = sum(year);
        }
    }

    //月の合計
    if (month==10) {
        month = 1;
    }
    if (month==12) {
        month = 3;
    }

    //日の合計
    while (day>9) {
        if (day==11||day==22) {
            break;
        } else {
            day = sum(day);
        }
    }

    //すべての合計
    unmei = year + month + day;
    while (unmei>9) {
        if (unmei==11||unmei==22) {
            break;
        } else {
            unmei = sum(unmei);
        }
    }

    //運命数の表示
    printf("\nあなたの運命数は『%d』です。\n", unmei);

    //運勢番号の入力
    printf("\nあなたの知りたい運勢の番号を入力してください。\n1:性格, 2:仕事運, 3:恋愛運, 4:相性\n");
    scanf("%d", &unsei);

    //エラー処理
    if (unsei<1||unsei>4) {
        printf("番号が不正です。\n\n");
        return 1;
    }

    //運勢の表示
    switch (unmei) {
        case 1:
            switch(unsei){
                case 1:
                    printf("\n意志が強く、判断力や処理能力にも優れているリーダー向きの性格です。\n\n");
                    break;
                case 2:
                    printf("\n独立心が旺盛なので自分がトップに立って自営する道で成功する可能性が高いです。\n\n");
                    break;
                case 3:
                    printf("\n情熱的で積極的なので、烈々でドラマチックな恋をします。\n\n");
                    break;
                default:
                    printf("\n命数では『3』や『8』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 2:
            switch(unsei){
                case 1:
                    printf("\n思いやりがあり、感受性の強いロマンチストなタイプです。\n\n");
                    break;
                case 2:
                    printf("\n人の気持ちを理解することができるのでサービス業や医療福祉に関わる職もいいでしょう。\n\n");
                    break;
                case 3:
                    printf("\n献身的に尽くすタイプなので、好きな人のためなら自己犠牲もいといません。\n\n");
                    break;
                default:
                    printf("\n命数では『6』や『9』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 3:
            switch(unsei){
                case 1:
                    printf("\n人付き合いを大切にし、常に努力を続ける秀才タイプです。\n\n");
                    break;
                case 2:
                    printf("\n新聞記者や運転手など変化や移動の多い仕事が向いています。\n\n");
                    break;
                case 3:
                    printf("\n思い込みが激しく、恋愛同士になった途端冷めてしまう可能性があります。\n\n");
                    break;
                default:
                    printf("\n運命数では『1』や『8』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 4:
            switch(unsei){
                case 1:
                    printf("\n保守的で安定を好み、内気でじっくり考えてから行動に移すタイプです。\n\n");
                    break;
                case 2:
                    printf("\n安定志向が強く勤勉なので公務員や大企業、特に経理、不動産業などが向いています。\n\n");
                    break;
                case 3:
                    printf("\n大人で落ち着いたタイプと結婚を視野に入れた恋愛をする傾向があります。\n\n");
                    break;
                default:
                    printf("\n運命数では『6』や『9』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 5:
            switch(unsei){
                case 1:
                    printf("\n行動的で物事に対する反応が早く、世の中の動きに敏感なタイプです。\n\n");
                    break;
                case 2:
                    printf("\nアイデアが豊富で、常に変化を求めるため営業職や広告宣伝業が向いているでしょう。\n\n");
                    break;
                case 3:
                    printf("\n新しいもの好きで、感情のままに動くので、次々と恋をするタイプです。\n\n");
                    break;
                default:
                    printf("\n運命数では『7』や『8』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 6:
            switch(unsei){
                case 1:
                    printf("\n美的センスに優れ、行動もスマートな芸術家タイプです。\n\n");
                    break;
                case 2:
                    printf("\n美的センスを活かせるデザインや芸術、美容関係がおすすめです。\n\n");
                    break;
                case 3:
                    printf("\n初めは甘えん坊なのですが、交際期間が長くなると尽くしたくなるタイプです。\n\n");
                    break;
                default:
                    printf("\n運命数では『2』や『4』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 7:
            switch(unsei){
                case 1:
                    printf("\n感情を露わにすることなく、分析力もあり思慮深いクールなタイプです。\n\n");
                    break;
                case 2:
                    printf("\n知的好奇心が活かせる研究職や専門職が向いています。\n\n");
                    break;
                case 3:
                    printf("\n感情ではなく頭で恋するところがあり、自分のことを理解してくれる相手を求めます。\n\n");
                    break;
                default:
                    printf("\n運命数では『3』や『8』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 8:
            switch(unsei){
                case 1:
                    printf("\n精神力的で活動的、自分の信じる道を突き進む情熱的なタイプです。\n\n");
                    break;
                case 2:
                    printf("\n競争し合い、ライバルとしのぎを削る報道関係やベンチャー企業に向いています。\n\n");
                    break;
                case 3:
                    printf("\n相手の気持ちを考えず突っ走ったり、あとで相性の不一致に気づくことがあります。\n\n");
                    break;
                default:
                    printf("\n運命数では『1』や『3』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 9:
            switch(unsei){
                case 1:
                    printf("\n正義を愛し、理想を信じる心のきれいな聖人タイプです。\n\n");
                    break;
                case 2:
                    printf("\n癒やしに関わるセラピストや医療、福祉に関わる仕事が向いています。\n\n");
                    break;
                case 3:
                    printf("\n恋愛を美化しやすいので、自分が幸せになれるかどうかで選ぶのがいいかもしれません。\n\n");
                    break;
                default:
                    printf("\n運命数では『2』や『4』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        case 11:
            switch(unsei){
                case 1:
                    printf("\n個性的で進歩的、いつも夢を追いかけているタイプです。\n\n");
                    break;
                case 2:
                    printf("\n流行に敏感なので美容やファッション業界が向いています。\n\n");
                    break;
                case 3:
                    printf("\n気まぐれなところがあり、相手に尽くしたかと思うとわがままを言うところがあります。\n\n");
                    break;
                default:
                    printf("\n運命数では『2』や『7』の人と相性がいいです。\n\n");
                    break;
            }
            break;
        default:
            switch(unsei){
                case 1:
                    printf("\n支配力や指導力とともに、抜群のバランス感覚を持っているカリスマタイプです。\n\n");
                    break;
                case 2:
                    printf("\n上に立つことを求めるので、ベンチャーなど責の姿勢を貫けるところが向いています。\n\n");
                    break;
                case 3:
                    printf("\n理想が高く好き嫌いが激しい面がありますが、一度好きになると寛容です。\n\n");
                    break;
                default:
                    printf("\n運命数では『4』や『4』の人と相性がいいです。\n\n");
                    break;
            }
            break;
    }

    return 0;
}

int sum(int num) {
    int dig;
    int sum = 0;

    while (num) {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}
