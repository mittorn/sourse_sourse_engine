#include "InputSystem.hpp"

EXPOSE_SINGLE_INTERFACE(CInputSystem, IInputSystem, INPUTSYSTEM_INTERFACE_VERSION);

bool CInputSystem::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CInputSystem::Disconnect()
{
};

void *CInputSystem::QueryInterface( const char *pInterfaceName )
{
	if(!strcmp(pInterfaceName, INPUTSYSTEM_INTERFACE_VERSION))
		return static_cast<IInputSystem*>(this);
	
	return nullptr;
};

InitReturnVal_t CInputSystem::Init()
{
	if(!mbConsoleTextMode)
	{
		// TODO: Init joystick
	};
	
	return INIT_OK;
};

void CInputSystem::Shutdown()
{
};

void CInputSystem::AttachToWindow(void *hWnd)
{
	mhWnd = hWnd;
};

void CInputSystem::DetachFromWindow()
{
	mhWnd = nullptr;
};

void CInputSystem::EnableInput(bool bEnable)
{
	mbActive = bEnable;
};

void CInputSystem::EnableMessagePump(bool bEnable)
{
	mbMessagePump = bEnable;
};

void CInputSystem::PollInputState()
{
	//if(!mbActive)
		//return;
	if(mbActive)
	{
		// TODO: Poll
	};
	
	if(mbMessagePump)
	{
		// TODO: msg pump here
	};
};

int CInputSystem::GetPollTick() const
{
	return 0;
};

bool CInputSystem::IsButtonDown(ButtonCode_t code) const
{
	return false;
};

int CInputSystem::GetButtonPressedTick(ButtonCode_t code) const
{
	return 0;
};

int CInputSystem::GetButtonReleasedTick(ButtonCode_t code) const
{
	return 0;
};

int CInputSystem::GetAnalogValue(AnalogCode_t code) const
{
	return 0;
};

int CInputSystem::GetAnalogDelta(AnalogCode_t code) const
{
	return 0;
};

int CInputSystem::GetEventCount() const
{
	return 0;
};

const InputEvent_t *CInputSystem::GetEventData() const
{
	return nullptr;
};

void CInputSystem::PostUserEvent(const InputEvent_t &event)
{
};

int CInputSystem::GetJoystickCount() const
{
	return 0;
};

void CInputSystem::EnableJoystickInput(int nJoystick, bool bEnable)
{
};

void CInputSystem::EnableJoystickDiagonalPOV(int nJoystick, bool bEnable)
{
};

void CInputSystem::SampleDevices()
{
};

void CInputSystem::SetRumble(float fLeftMotor, float fRightMotor, int userId)
{
};

void CInputSystem::StopRumble()
{
};

void CInputSystem::ResetInputState()
{
};

void CInputSystem::SetPrimaryUserId(int userId)
{
};

const char *CInputSystem::ButtonCodeToString(ButtonCode_t code) const
{
	return "";
};

const char *CInputSystem::AnalogCodeToString(AnalogCode_t code) const
{
	return "";
};

ButtonCode_t CInputSystem::StringToButtonCode(const char *pString) const
{
	return BUTTON_CODE_NONE;
};

AnalogCode_t CInputSystem::StringToAnalogCode(const char *pString) const
{
	return ANALOG_CODE_INVALID;
};

void CInputSystem::SleepUntilInput(int nMaxSleepTimeMS)
{
};

ButtonCode_t CInputSystem::VirtualKeyToButtonCode(int nVirtualKey) const
{
	return BUTTON_CODE_NONE;
};

int CInputSystem::ButtonCodeToVirtualKey(ButtonCode_t code) const
{
	return 0;
};

ButtonCode_t CInputSystem::ScanCodeToButtonCode(int lParam) const
{
	return BUTTON_CODE_NONE;
};

int CInputSystem::GetPollCount() const
{
	return 0;
};

void CInputSystem::SetCursorPosition(int x, int y)
{
};

void *CInputSystem::GetHapticsInterfaceAddress() const
{
	return nullptr;
};

void CInputSystem::SetNovintPure(bool bPure)
{
};

bool CInputSystem::GetRawMouseAccumulators(int &accumX, int &accumY)
{
	return true;
};

void CInputSystem::SetConsoleTextMode(bool bConsoleTextMode)
{
	mbConsoleTextMode = bConsoleTextMode;
};