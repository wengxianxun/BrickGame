#pragma once
#include "SceneBase.h"

class CChooseGame : public CSceneBase
{
public:
	CChooseGame(CGameScene* pGameScene);
	~CChooseGame();

	//---------------------    CSceneBase    ----------------------
	//��ʼ��
	void Init();
	
	//����
	void Play(float dt);

	//��ȡ��ǰBrick״̬
	bool GetBrickState(int iRowIndex, int iColIndex);

	//��ȡ��Ϸ����
	SCENE_INDEX GetSceneType();

	//��
	void OnLeft();

	//��
	void OnRight();

	//��
	void OnUp();

	//��
	void OnDown();

	//Fire
	void OnFire();

	//��ʼ
	void OnStart();

	//---------------------    CSceneBase    ----------------------

private:
	typedef vector<int> TVECTOR_ANIMDATA;

	enum 
	{
		ANIM_NUM = 4,
	};

private:
	TVECTOR_ANIMDATA* m_pAnimData;		//ָ�򶯻����ݵ�ָ��

	int m_iGameIndex;					//��Ϸ����

	int m_iAnimIndex;					//��ǰ��������

	bool m_bFirstAnim;					//��һ����������ȴ�

	int m_iSpeed;						//�ٶ�

	int m_iLevel;						//�ȼ�

	float m_iCurTime;					//��ǰʱ��
};
