bool isPalindrome(int x) {
    int x2 = x;//称xx2
    //俱计
    long long int r = 0;//は筁ㄓ计单璶r柑
    while( x > 0 ){
        //俱计
        r = r*10 + x%10;//ブ
        x = x / 10;
    }
    //ㄏノブ猭
    //程xЧ跑Θ0...Чxぃノ
    if(x2 == r) return true;
    else return false;
}
