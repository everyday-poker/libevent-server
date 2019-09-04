#pragma once

// ������
const int ERROR_ACCOUNT_EXISTS			= 1;			// �˺��Ѿ�����
const int ERROR_ACCOUNT_NOTEXISTS		= 2;			// �˺Ų�����
const int ERROR_PASSWD_FALSE			= 3;			// �������
const int ERROR_NO_USER_DATA			= 4;			// û���������
const int ERROR_ALREADY_LOGON			= 5;			// ����Ѿ���¼��Ϸ
const int ERROR_DESK_FULL				= 6;			// ������������
const int ERROR_NO_THIS_DESK			= 7;			// û���������
const int ERROR_DESKSTATION_HAVENOUSER	= 8;			// �����λ��û�����
const int ERROR_INVALID_DESK			= 9;			// ���Ӳ�����
const int ERROR_DESK_NOT_INDISMISSS		= 10;			// ����û�д��ڽ�ɢ״̬
const int ERROR_NO_BUY_DESK_CONFIG		= 11;			// û���������
const int ERROR_USER_ALREADY_LOGON		= 12;			// ����Ѿ���¼��
const int ERROR_TARGET_USER_NOT_EXISTS	= 13;			// Ŀ����Ҳ�����
const int ERROR_ACCOUNT_NOT_MATCH		= 14;			// �˺Ų�ƥ��
const int ERROR_SERVICE_FULL			= 15;			// ��������������
const int ERROR_ROOM_NO_MONEYREQUIRE	= 16;			// ��������뷿��������
const int ERROR_ROOM_EXISTING			= 17;			// �����ظ���������Ϸ����
const int ERROR_NOT_ENOUGH_JEWELS		= 18;			// ��������
const int ERROR_CANNOT_SEND_MYSELF		= 19;			// �������͸��Լ�
const int ERROR_NO_MATCH_DATA		    = 20;			// Ŀ�����ݲ�����
const int ERROR_NO_THIS_ROOM			= 21;			// û���������
const int ERROR_NO_GRADE_DATA			= 22;			// û��ս������
const int ERROR_NO_ROOMOPENED_DATA		= 23;			// û�п�������
const int ERROR_ROOM_TOKEN_NOTMATCH		= 24;			// token��ƥ��
const int ERROR_NO_MAIL_DATA			= 25;			// û���ʼ�����
const int ERROR_NO_REQ_SUPPORT_TIMES	= 26;			// ����������Ʋ���������
const int ERROR_INVITE_CODE	            = 27;			// ���������
const int ERROR_TOKEN_IS_INVALID		= 28;			// token��Ч
const int ERROR_CANNOT_BUYDESK_INROOM	= 29;			// ����Ϸ���޷���������
const int ERROR_CANNOT_ENTERDESK_INROOM = 30;			// ����Ϸ���޷����뷿��
const int ERROR_INVALID_MAIL			= 32;			// ��Ч�ʼ�����
const int ERROR_NOVAILD_DESK			= 33;			// ��������
const int ERROR_HAVE_DIRTYWORD			= 34;			// �������д�
const int ERROR_NEED_SET_BANKPASSWD		= 35;			// ����������������
const int ERROR_BANKPASSWD_FALSE		= 36;			// �����������
const int ERROR_BANK_SAVEMONEY_TOOMUCH	= 37;			// ��Ľ�Ҳ��ܳ������ϵĽ��
const int ERROR_BANK_TAKEMONEY_TOOMUCH	= 38;			// ȡ�Ľ�Ҳ��ܳ������еĽ��
const int ERROR_BUY_DESK_TOPLIMIT		= 39;			// ��ǰ���������Ѵ�����
const int ERROR_FRIEND_ALREADY_EXISTS	= 40;			// �Ѿ��Ǻ�����
const int ERROR_FRIEND_ALREDAY_REQADD	= 41;			// �Ѿ���������Ϊ������
const int ERROR_FIRNED_CANNOT_ADDMYSELF = 42;			// ���ܼ��Լ�Ϊ����
const int ERROR_FRIEND_ISNOT_FRIEND		= 43;			// �Է�������ĺ���
const int ERROR_FRIEND_ALREADY_INVITE	= 44;			// �Ѿ��������
const int ERROR_GAME_CANNOT_GAMEBEGIN	= 45;			// ����������Ϸ��ʼ����
const int ERROR_ACCOUNT_SEAL			= 46;			// �˺��Ѿ�����
const int ERROR_FRIENDSGROUP_NOT_EXISTS	= 47;			// ���ֲ�������
const int ERROR_FRIENDSGROUP_NO_MASTER	= 48;			// ����Ⱥ��
const int ERROR_FRIENDSGROUP_EVE_LIMIT =  49;			// ÿ�ո�����������
const int ERROR_FRIENDSGROUP_ALL_LIMIT =  50;			// ������������
const int ERROR_FRIENDSGROUP_JOIN_LIMIT = 51;			// ������ֲ�����
const int ERROR_FRIENDSGROUP_PEOPLE_FULL = 52;			// ���ֲ���������
const int ERROR_FRIENDSGROUP_REPEAT_SEND = 53;			// �ظ�������Ϣ
const int ERROR_FRIENDSGROUP_ALREADY_IN =  54;			// �Ѿ��ھ��ֲ���
const int ERROR_FRIENDSGROUP_NOT_NOTIY =   55;			// ֪ͨ��Ϣ������
const int ERROR_FRIENDSGROUP_ERROR_NOTIY = 56;			// ֪ͨ��Ϣ�쳣
const int ERROR_FRIENDSGROUP_ERROR_WORD =  57;			// �����Ƿ��ַ�
const int ERROR_FRIENDSGROUP_CREATE_FULL = 58;			// �������ֲ������Ѿ�������
const int ERROR_FRIENDSGROUP_ERROR_ID =    59;			// Ŀ��id����
const int ERROR_FRIENDSGROUP_ILLEGAL_OPER =60;			// �Ƿ�����
const int ERROR_FRIENDSGROUP_ERR_DISMISS = 61;			// 1���ֹ��ɢ���ֲ�
const int ERROR_FRIEND_ERR_REWARDCOUNT =   62;			// ���ͺ�����������
const int ERROR_FRIENDSGROUP_ERR_JOIN_ROOM = 63;		// �Ǿ��ֲ���Ա��ֹ������ֲ�����
const int ERROR_STOP_JOIN				=  64;			// ��Ϸ��;��ֹ����
const int ERROR_FRIENDSGROUP_DESK_NOT_EXISTS = 65;		// ���ֲ�����������
const int ERROR_FRIENDSGROUP_DESK_PLAYING = 66;			// ���ֲ�����������Ϸ��
const int ERROR_PHONE_NO_BIND = 67;						// �ֻ�δ��
const int ERROR_DESKSTATION_NOTEXISTS = 68;				// ��λ������
const int ERROR_DESKSTATION_HAVEUSER = 69;				// �����λ���Ѿ������
const int ERROR_NO_MANAGER = 70;						// û��Ȩ�޵Ĳ���
const int ERROR_FRIENDSGROUP_MANA_LIMIT = 71;			// ���ֲ�����Ա����
const int ERROR_FRIENDSGROUP_ALREADY_NOTIY = 72;		// ��Ϣ�Ѿ���������Ҳ���
const int ERROR_FRIEND_ROOM_DESK_FULL	= 73;			// ˽�˷�������������ҳ�ȥ��ֵ���޷�����
const int ERROR_NO_SET_PEOPLE	= 74;					// û����������
const int ERROR_NOT_ENOUGH_MONEY	= 75;				// ��Ҳ���
const int ERROR_CANNOT_DEL_USER	= 76;					// ����Ϸ���޷�ɾ�������
const int ERROR_FRIENDSGROUP_ERR_CREATE_ROOM = 77;		// �������ֲ�����ʧ��
const int ERROR_FRIENDSGROUP_FIRECOIN_LIMIT = 78;		// ��Ҳ���
const int ERROR_FRIENDSGROUP_NO_FIRECOIN_INROOM = 79;	// ��Ϸ���޷���ֵ�һ����
const int ERROR_NOT_AGENT = 80;							// ���Ǵ������޷�����
const int ERROR_FRIENDSGROUP_FIRECOIN_RECOVER = 81;		// ��һ��ճ�������
const int ERROR_GAME_PLAYING_ERR_SIT = 82;				// ��Ϸ�н�ֹ����
const int ERROR_FRIENDSGROUP_OPP_CREATE_FULL = 83;		// �Է��������ֲ���������
const int ERROR_SERVER_CLOSE = 84;						// ͣ����
const int ERROR_NAME_REPEAT = 85;						// �����ظ�
const int ERROR_FRIENDSGROUP_HAVE_ROOM = 86;			// ��������vip���䣬�޷�����
const int ERROR_FRIENDSGROUP_NOT_JEWELS = 87;			// Ⱥ����ʯ����
const int ERROR_FRIENDSGROUP_NOT_MONEY = 88;			// Ⱥ����Ҳ���
const int ERROR_GAME_NO_START = 89;						// ��Ϸ������δ����
const int ERROR_MAC_NOTMATCH = 90;						// �豸�벻ƥ�䣬����ϵ����Ա���
const int ERROR_CREATE_ROOM = 91;						// ���������������
const int ERROR_XIANLIAO_NO_BIND = 92;					// ������δ��΢��
const int ERROR_MATCH_PLAYING = 93;						// �����л��߱���������ʼ
const int ERROR_MATCH_OVER = 94;						// �����Ѿ�����