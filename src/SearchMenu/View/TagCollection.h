// Copyright WRLD Ltd (2018-), All Rights Reserved

#pragma once

#include "BidirectionalBus.h"
#include "CallbackCollection.h"
#include "TagSearchAddedMessage.h"
//#include "TagSearchS_S_SLoadedMessage.h"

#include <string>
#include <vector>
#include <map>

namespace ExampleApp
{
	namespace SearchMenu
	{
		namespace View
		{
			class TagCollection
			{
			public:
				class TagInfo
				{
					std::string m_tag;
					std::string m_visibleText;
					bool m_shouldTryInterior;
					bool m_hasRadiusOverride;
					float m_radiusOverride;
				public:
					TagInfo(const std::string& tag, const std::string& visibleText,
							bool shouldTryInterior,
							bool hasRadiusOverride, float radiusOverride)
							: m_tag(tag)
							, m_visibleText(visibleText)
							, m_shouldTryInterior(shouldTryInterior)
							, m_hasRadiusOverride(hasRadiusOverride)
							, m_radiusOverride(radiusOverride)
					{
					}
					const std::string& Tag()         const { return m_tag; }
					const std::string& VisibleText() const { return m_visibleText; }
					bool ShouldTryInterior()         const { return m_shouldTryInterior; }
					bool HasRadiusOverride()         const { return m_hasRadiusOverride; }
					float RadiusOverride()           const { return m_radiusOverride; }
				};

			private:
				ExampleAppMessaging::TMessageBus& m_messageBus;

				typedef std::map<std::string, int> TTagInfoMap;
				typedef std::map<std::string, int> TTagTextMap;

				std::vector<TagInfo> m_tagStorage;
				TTagInfoMap m_tagsByText;
				TTagTextMap m_tagsByTag;

				Eegeo::Helpers::TCallback1<TagCollection, const TagSearch::TagSearchAddedMessage&> m_onTagSearchAddedHandler;
				//Eegeo::Helpers::TCallback1<TagCollection, const TagSearch::TagSearchS_S_SLoadedMessage&> m_onTagSearchS_S_SLoadedHandler;

				void OnTagSearchAdded(const TagSearch::TagSearchAddedMessage& message);
				//void OnTagSearchS_S_SLoaded(const TagSearch::TagSearchS_S_SLoadedMessage& message);
				void RememberTag(const std::string& text, const std::string& tag,
								 bool shouldTryInterior,
								 bool hasRadiusOverride, float radiusOverride);

			public:
				TagCollection(ExampleAppMessaging::TMessageBus& messageBus);
				~TagCollection();

				bool HasTag(const std::string& text);
				const TagInfo& GetInfoByText(const std::string& text);
				const TagInfo& GetInfoByTag(const std::string& tag);
			};
		}
	}
}