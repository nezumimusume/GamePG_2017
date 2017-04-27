/*!
 *@brief	プレイヤー。
 */

#pragma once

#include "Lib/Object3D.h"
#include "tkEngine/character/tkCharacterController.h"

/*!
 *@brief	プレイヤー。
 */
class Player : public Object3D{
	enum AnimationNo {
		AnimationInvalid = -1,
		AnimationStand,		//立ち。
		AnimationWalk,		//歩き。
		AnimationRun,		//走り。
		AnimationJump,		//ジャンプ。
		AnimationAttack_Start,
		AnimationAttack_00 = AnimationAttack_Start,	//攻撃00。
		AnimationAttack_01,	//攻撃01。
		AnimationAttack_02,	//攻撃02。
		AnimationAttack_End = AnimationAttack_02,
		AnimationDamage,	//ダメージ。
		AnimationDeath,		//死亡。
		NumAnimation,		//アニメーションの数。
	};
public:
	Player();
	~Player();
	bool Start() override;
	void Update() override;
private:
	void Move();
	void Rotation();
	void AnimationControl();
	void PlayAnimation(AnimationNo animNo);
private:
	CCharacterController	characterController;			//キャラクターコントローラー。
	CVector3				moveSpeed = CVector3::Zero;		//移動速度。
	AnimationNo				playAnimNo = AnimationInvalid;	//アニメーション番号。
};

extern Player* player;