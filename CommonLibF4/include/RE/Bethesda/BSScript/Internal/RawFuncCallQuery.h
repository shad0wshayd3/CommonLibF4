#pragma once



#include "RE/Bethesda/BSScript/Internal/IFuncCallQuery.h"  // BSScript::Internal::IFuncCallQuery
#include "RE/Bethesda/BSScript/Variable.h"  // BSScript::Variable
#include "RE/Bethesda/BSFixedString.h"  // BSFixedString
#include "RE/Bethesda/BSTArray.h"  // BSTArray
#include "RE/Bethesda/BSTSmartPointer.h"  // BSTSmartPointer
#include "RE/Bethesda/BSScript/ObjectTypeInfo.h" // ObjectTypeInfo

namespace RE
{
	namespace BSScript
	{
		class ObjectTypeInfo;


		namespace Internal
		{
			class __declspec(novtable) RawFuncCallQuery :
				public IFuncCallQuery
			{
			public:
				static constexpr auto RTTI{ RTTI::BSScript__Internal__RawFuncCallQuery };
				static constexpr auto VTABLE{ VTABLE::BSScript__Internal__RawFuncCallQuery };


				virtual ~RawFuncCallQuery();		// 00
				// TODO: possibly GetFunctionCallInfo?
				// override (IFuncCallQuery)
				virtual void Unk_01(void) override;	// 01

				// TODO: verify if accurate
				// members
				CallType                        callType;  // 10
				std::uint32_t                   pad14;     // 14
				BSTSmartPointer<ObjectTypeInfo> objType;   // 18
				BSFixedString                   name;      // 20
				Variable                        self;      // 28
				BSTArray<Variable>              args;      // 38
			};
			static_assert(sizeof(RawFuncCallQuery) == 0x50);
		}
	}
}