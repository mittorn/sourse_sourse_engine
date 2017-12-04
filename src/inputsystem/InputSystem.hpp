#pragma once

#include "inputsystem/iinputsystem.h"

class CInputSystem : public IInputSystem
{
public:
	CInputSystem() = default;
	~CInputSystem() = default;
	
	// IAppSystem
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	// IInputSystem
	
	void AttachToWindow(void *hWnd) override;
	void DetachFromWindow() override;

	void EnableInput(bool bEnable) override;

	void EnableMessagePump(bool bEnable) override;

	void PollInputState() override;

	int GetPollTick() const override;

	bool IsButtonDown(ButtonCode_t code) const override;

	int GetButtonPressedTick(ButtonCode_t code) const override;
	int GetButtonReleasedTick(ButtonCode_t code) const override;

	int GetAnalogValue(AnalogCode_t code) const override;

	int GetAnalogDelta(AnalogCode_t code) const override;

	int GetEventCount() const override;
	const InputEvent_t *GetEventData() const override;

	void PostUserEvent(const InputEvent_t &event) override;

	int GetJoystickCount() const override;

	void EnableJoystickInput(int nJoystick, bool bEnable) override;

	void EnableJoystickDiagonalPOV(int nJoystick, bool bEnable) override;

	void SampleDevices() override;

	void SetRumble(float fLeftMotor, float fRightMotor, int userId = INVALID_USER_ID) override;
	void StopRumble() override;

	void ResetInputState() override;

	void SetPrimaryUserId(int userId) override;

	const char *ButtonCodeToString(ButtonCode_t code) const override;
	const char *AnalogCodeToString(AnalogCode_t code) const override;
	ButtonCode_t StringToButtonCode(const char *pString) const override;
	AnalogCode_t StringToAnalogCode(const char *pString) const override;

	void SleepUntilInput(int nMaxSleepTimeMS = -1) override;

	ButtonCode_t VirtualKeyToButtonCode(int nVirtualKey) const override;
	int ButtonCodeToVirtualKey(ButtonCode_t code) const override;
	ButtonCode_t ScanCodeToButtonCode(int lParam) const override;

	int GetPollCount() const override;

	void SetCursorPosition(int x, int y) override;

	void *GetHapticsInterfaceAddress() const override;

	void SetNovintPure(bool bPure) override;

	bool GetRawMouseAccumulators(int &accumX, int &accumY) override;

	void SetConsoleTextMode(bool bConsoleTextMode) override;
private:
	bool mbActive{false};
	bool mbMessagePump{false};
	bool mbConsoleTextMode{false};
};