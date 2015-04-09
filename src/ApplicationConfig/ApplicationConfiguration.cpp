// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#include "ApplicationConfiguration.h"

namespace ExampleApp
{
    namespace ApplicationConfig
    {
        ApplicationConfiguration::ApplicationConfiguration(const std::string& name,
                                                           const Eegeo::Space::LatLongAltitude& interestLocation,
                                                           float distanceToInterestMetres,
                                                           float orientationDegrees,
                                                           bool tryStartAtGpsLocation,
                                                           const std::string& googleAnalyticsReferrerToken)
        : m_name(name)
        , m_interestLocation(interestLocation)
        , m_distanceToInterestMetres(distanceToInterestMetres)
        , m_orientationDegrees(orientationDegrees)
        , m_tryStartAtGpsLocation(tryStartAtGpsLocation)
        , m_googleAnalyticsReferrerToken(googleAnalyticsReferrerToken)
        {
        }
        
        ApplicationConfiguration::ApplicationConfiguration()
        : m_name("")
        , m_interestLocation(Eegeo::Space::LatLongAltitude::FromDegrees(0.0, 0.0, 0.0))
        , m_distanceToInterestMetres(0.f)
        , m_orientationDegrees(0.f)
        , m_tryStartAtGpsLocation(false)
        , m_googleAnalyticsReferrerToken("")
        {
            
        }
        
        ApplicationConfiguration ApplicationConfiguration::Empty()
        {
            return ApplicationConfiguration();
        }
        
        const std::string& ApplicationConfiguration::Name() const
        {
            return m_name;
        }
        
        const Eegeo::Space::LatLongAltitude& ApplicationConfiguration::InterestLocation() const
        {
            return m_interestLocation;
        }
        
        float ApplicationConfiguration::DistanceToInterestMetres() const
        {
            return m_distanceToInterestMetres;
        }
        
        float ApplicationConfiguration::OrientationDegrees() const
        {
            return m_orientationDegrees;
        }
        
        bool ApplicationConfiguration::TryStartAtGpsLocation() const
        {
            return m_tryStartAtGpsLocation;
        }
        
        const std::string& ApplicationConfiguration::GoogleAnalyticsReferrerToken() const
        {
            return m_googleAnalyticsReferrerToken;
        }
    }
}
