bool isPalindrome(int x) {
    int x2 = x;//�ƥ�x��x2
    //�ܪ��ܪ������
    long long int r = 0;//�ϹL�Ӫ��Ʀr�A���U�n��r�̭�
    while( x > 0 ){
        //�ܪ��ܪ������
        r = r*10 + x%10;//���
        x = x / 10;
    }
    //�ϥέ�֪k
    //�̫�x�駹�F�A�ܦ�0...���Fx�����
    if(x2 == r) return true;
    else return false;
}
