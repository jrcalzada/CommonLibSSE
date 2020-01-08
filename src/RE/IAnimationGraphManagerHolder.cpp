#include "RE/IAnimationGraphManagerHolder.h"


namespace RE
{
	bool IAnimationGraphManagerHolder::GetAnimationGraphManager(BSTSmartPointer<BSAnimationGraphManager>& a_out)
	{
		return GetAnimationGraphManagerImpl(a_out);
	}


	bool IAnimationGraphManagerHolder::GetGraphVariableFloat(const BSFixedString& a_variableName, float& a_out)
	{
		return GetGraphVariableImpl(a_variableName, a_out);
	}


	bool IAnimationGraphManagerHolder::GetGraphVariableInt(const BSFixedString& a_variableName, SInt32& a_out)
	{
		return GetGraphVariableImpl(a_variableName, a_out);
	}


	bool IAnimationGraphManagerHolder::GetGraphVariableBool(const BSFixedString& a_variableName, bool& a_out)
	{
		return GetGraphVariableImpl(a_variableName, a_out);
	}


	bool IAnimationGraphManagerHolder::SetAnimationGraphManager(BSTSmartPointer<BSAnimationGraphManager>& a_in)
	{
		return SetAnimationGraphManagerImpl(a_in);
	}
}
