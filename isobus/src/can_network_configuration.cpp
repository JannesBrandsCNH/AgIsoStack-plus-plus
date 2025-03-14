//================================================================================================
/// @file can_network_configuration.cpp
///
/// @brief This is a class for changing stack settings.
/// @author Adrian Del Grosso
///
/// @copyright 2022 Adrian Del Grosso
//================================================================================================

#include "isobus/isobus/can_network_configuration.hpp"

namespace isobus
{
	void CANNetworkConfiguration::set_max_number_transport_protocol_sessions(std::uint32_t value)
	{
		maxNumberTransportProtocolSessions = value;
	}

	std::uint32_t CANNetworkConfiguration::get_max_number_transport_protocol_sessions() const
	{
		return maxNumberTransportProtocolSessions;
	}

	void CANNetworkConfiguration::set_minimum_time_between_transport_protocol_bam_frames(std::uint32_t value)
	{
		constexpr std::uint32_t MAX_BAM_FRAME_DELAY_MS = 200;
		constexpr std::uint32_t MIN_BAM_FRAME_DELAY_MS = 10;

		if ((value <= MAX_BAM_FRAME_DELAY_MS) &&
		    (value >= MIN_BAM_FRAME_DELAY_MS))
		{
			minimumTimeBetweenTransportProtocolBAMFrames = value;
		}
	}

	std::uint32_t CANNetworkConfiguration::get_minimum_time_between_transport_protocol_bam_frames() const
	{
		return minimumTimeBetweenTransportProtocolBAMFrames;
	}

	void CANNetworkConfiguration::set_max_number_of_etp_frames_per_edpo(std::uint8_t numberFrames)
	{
		extendedTransportProtocolMaxNumberOfFramesPerEDPO = numberFrames;
	}

	std::uint8_t CANNetworkConfiguration::get_max_number_of_etp_frames_per_edpo() const
	{
		return extendedTransportProtocolMaxNumberOfFramesPerEDPO;
	}

	void CANNetworkConfiguration::set_max_number_of_network_manager_protocol_frames_per_update(std::uint8_t numberFrames)
	{
		networkManagerMaxFramesToSendPerUpdate = numberFrames;
	}

	std::uint8_t CANNetworkConfiguration::get_max_number_of_network_manager_protocol_frames_per_update() const
	{
		return networkManagerMaxFramesToSendPerUpdate;
	}
}
