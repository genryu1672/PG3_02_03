#pragma once
#include"electricity.h"
class Aircontion :public electricity
{
public:
	//�R���X�g���N�^
	Aircontion();
	//�f�X�g���N�^
	~Aircontion();
	//�H��
	void electricAppliances() override;


private:
	//���i��
	const char* name = "�G�A�R��";
	//����
	const char* role = "�������₵�Ă����(���������Ă����)��";
};

