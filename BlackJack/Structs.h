struct Player
{
	int Cards[5]{};
	int Money = 500; // ������� ������
	int ModelOfPlaing = 0; // ������ ��������� �����
	int Score = 0; // ������� ���������� ������ �� ����
};
struct Card
{
	int Denomination = 0; // ����������
	int Suit = 0; // �����
	int PositionInDeck = 0; // ��� ���������� � ������
};
