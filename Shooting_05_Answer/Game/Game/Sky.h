#pragma once
class Sky : public IGameObject
{
public:
	///////////////////////////////////////////////////////
	//�������烁���o�֐��B
	///////////////////////////////////////////////////////
	Sky();
	~Sky();
	bool Start() override;
	void Update() override;
	void Render(CRenderContext& rc) override;
	///////////////////////////////////////////////////////
	//�������烁���o�ϐ��B
	///////////////////////////////////////////////////////
	CLight					m_light;
	CSkinModelDataHandle	m_skinModelData;						//!<�X�L�����f���f�[�^�B
	CSkinModel				m_skinModel;							//!<�X�L�����f���B
	CAnimation				m_animation;							//!<�A�j���[�V�����B 
	CVector3				m_position = CVector3::Zero;			//!<���W�B
	CQuaternion				m_rotation = CQuaternion::Identity;		//!<��]�B
};
