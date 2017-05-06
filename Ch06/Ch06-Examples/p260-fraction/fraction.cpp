void fraction::lowterms()    // ���������� �����
{
	long tnum, tden, temp, gcd;
	tnum = labs(num);            // ���������� ��������������� 
	tden = labs(den);            // �������� (����� cmath)
	if( tden == 0 )              // �������� ����������� �� 0
		{ cout << "Incorrect divider!"; exit(1); }
	else if( tnum == 0 )         // �������� ��������� �� 0
		{ num=0; den = 1; return; }
	// ���������� ����������� ������ ��������
	while(tnum !=0)
	{
		if( tnum < tden )          // ���� ��������� ������ �����������,
			{ temp=tnum; tnum=tden; tden=temp; } //������ �� �������
	tnum = tnum - tden;        // ���������
	}
	gcd = tden;                  // ����� ��������� � ����������� ��
	num = num / gcd;             // ���������� ���������� ����� ��������
	den = den / gcd;
}


