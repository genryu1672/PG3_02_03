#pragma once
#include"electricity.h"
class refrigerator :public electricity
{
public:
	//�R���X�g���N�^
	refrigerator();
	//�f�X�g���N�^
	~refrigerator();
	
	void electricAppliances() override;


private:
	//���i��
	const char* name = "�①��";
	//����
	const char* role = "�c�蕨��ۑ����Ă���镨";
};

