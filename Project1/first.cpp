int main()
{

	//�ڷ��� (ũ����� byte=(8bit))
	//������: char(1), short(2), int(4), long(4), longlong(8)
	//�Ǽ���: float(4), double(8), long double(16)
	//unsigned�� ���� ������ ǥ���Ѵ�. 
	//MSB�� most siginificnat bit ��� �ǹ̷� ��ȣ�� ������. 1�� ���� 0�� ���
	//��ǻ�ʹ� ������ ǥ���� ���� 0�� �Ǵ� ���� �Ѵ�.
	//2�� �������� �̿��ϸ� sighed���� unsighed�� ������ ������ ǥ���� �� �ִ�.

	int i = 0;

	//1byte�� ����� ǥ�� 256���� 0~255
	unsigned char c = 0;
	c = 0;
	c = 255;

	c = -1;
	//1byte�� ���� ǥ�� 256���� -128~0~127
	char c1 = 0;

	c1 = 255;

	return 0;
}