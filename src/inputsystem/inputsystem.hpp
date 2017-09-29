#pragma once

#include "inputsystem/iinputsystem.h"

EXPOSE_SINGLE_INTERFACE(CInputSystem, IInputSystem, INPUTSYSTEM_INTERFACE_VERSION)

class CInputSystem : public IInputSystem
{
public:
	CInputSystem() = default;
	~CInputSystem() = default;
	
	// IAppSystem
	
	bool Connect( CreateInterfaceFn factory );
	void Disconnect();

	void *QueryInterface( const char *pInterfaceName );

	InitReturnVal_t Init();
	void Shutdown();
	
	// IInputSystem
	
	void AttachToWindow(void *hWnd);
	void DetachFromWindow();

	void EnableInput(bool bEnable);

	void EnableMessagePump(bool bEnable);

	void PollInputState();

	int GetPollTick() const;

	bool IsButtonDown(ButtonCode_t code) const;

	int GetButtonPressedTick(ButtonCode_t code) const;
	int GetButtonReleasedTick(ButtonCode_t code) const;

	int GetAnalogValue(AnalogCode_t code) const;

	int GetAnalogDelta(AnalogCode_t code) const;

	int GetEventCount() const;
	const InputEvent_t *GetEventData() const;

	void PostUserEvent(const InputEvent_t &event);

	int GetJoystickCount() const;

	void EnableJoystickInput(int nJoystick, bool bEnable);

	void EnableJoystickDiagonalPOV(int nJoystick, bool bEnable);

	void SampleDevices();

	void SetRumble(float fLeftMotor, float fRightMotor, int userId = INVALID_USER_ID);
	void StopRumble();

	void ResetInputState();

	void SetPrimaryUserId(int userId);

	const char *ButtonCodeToString(ButtonCode_t code) const;
	const char *AnalogCodeToString(AnalogCode_t code) const;
	ButtonCode_t StringToButtonCode(const char *pString) const;
	AnalogCode_t StringToAnalogCode(const char *pString) const;

	void SleepUntilInput(int nMaxSleepTimeMS = -1);

	ButtonCode_t VirtualKeyToButtonCode(int nVirtualKey) const;
	int ButtonCodeToVirtualKey(ButtonCode_t code) const;
	ButtonCode_t ScanCodeToButtonCode(int lParam) const;

	int GetPollCount() const;

	void SetCursorPosition(int x, int y);

	void *GetHapticsInterfaceAddress() const;

	void SetNovintPure(bool bPure);

	bool GetRawMouseAccumulators(int &accumX, int &accumY);

	void SetConsoleTextMode(bool bConsoleTextMode);
};