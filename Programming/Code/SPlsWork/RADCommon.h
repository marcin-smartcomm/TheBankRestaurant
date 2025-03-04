namespace Crestron.RAD.Common.Enums;
        // class declarations
         class AudioConnections;
         class AudioConnectionTypes;
         class VideoConnections;
         class VideoConnectionTypes;
         class MediaServiceStates;
         class MediaServiceSubscriptionStates;
         class AudioVideoExtenderType;
         class DcFaultState;
         class TemperatureUnit;
         class DevicePropertyAttributes;
         class DevicePropertyRenderHint;
         class DevicePropertyStates;
         class DevicePropertyType;
         class DevicePropertyUnit;
         class PoolControllerFunctions;
         class PoolFunctions;
         class PoolPartType;
         class PoolType;
         class TemperatureScale;
         class PortDirection;
         class PortType;
         class SecuritySystemAlarmType;
         class SecuritySystemCommandType;
         class SecuritySystemCapabilities;
         class SecuritySystemError;
         class SecuritySystemKeypadFunctionButtonIcon;
         class SecuritySystemKeypadFunctionType;
         class SecuritySystemKeypadIndicatorStateType;
         class SecuritySystemKeypadLedColors;
         class SecuritySystemOperationalResultCode;
         class SecuritySystemState;
         class SecuritySystemZoneState;
         class SecuritySystemZoneType;
         class AlarmStateType;
         class ArmedState;
         class ArrowDirections;
         class AuthenticationStatusType;
         class AutoAnswerModes;
         class AuxiliaryButtonIcon;
         class AuxiliaryButtonLedColors;
         class AvrStateObjects;
         class BatteryState;
         class BlurayPlayerStateObjects;
         class BypassedState;
         class CableBoxStateObjects;
         class CodecModel;
         class CodecStateObjects;
         class ColorButtons;
         class eComBaudRates;
         class eComDataBits;
         class eComHardwareHandshakeType;
         class CommandAction;
         class CommonFeatureSupport;
         class CommonCommandGroupType;
         class CommunicationType;
         class eComParityType;
         class eComportCapabilities;
         class eComProtocolType;
         class eComSoftwareHandshakeType;
         class eComStopBits;
         class ConferenceCallChange;
         class ConferenceCallDirection;
         class ConferenceCallEncryption;
         class ConferenceCallProtocol;
         class ConferenceCallRates;
         class ConferenceCallStatus;
         class ConferenceCallType;
         class DeviceTypes;
         class Direction;
         class DisplayStateObjects;
         class DownloadManagerErrorType;
         class EndPointLocation;
         class ErrorState;
         class EthernetAdapterType;
         class ethernetProtocol;
         class FeedbackSupportEnum;
         class FrequencyBand;
         class IrAction;
         class IrActions;
         class LetterButtons;
         class LockState;
         class MediaPlayerPlaypackStatus;
         class MessageType;
         class PhonebookContactType;
         class PhonebookLocation;
         class PipLocations;
         class PlayBackStatus;
         class PresetEvent;
         class RampingToneState;
         class RampingVolumeState;
         class ResourceStatus;
         class SecuritySystemAreaType;
         class SecuritySystemResourceType;
         class SecuritySystemSettableStates;
         class SecuritySystemStateObjects;
         class SecuritySystemStatus;
         class SelfViewMode;
         class StandardCommandsEnum;
         class StandardFeedback;
         class PowerStatesFeedback;
         class MuteStatesFeedback;
         class MicMuteStatesFeedback;
         class StandbyStatesFeedback;
         class SelfviewStatesFeedback;
         class TunerFrequencyBandStatesFeedback;
         class ResourceStatusFeedback;
         class CompatibleFeedback;
         class AuthorizationFeedback;
         class InputTypesFeeback;
         class CallDirectionFeedback;
         class CallStateFeedback;
         class CallProtocolFeedback;
         class CallTypeFeedback;
         class AllowFarEndControlOfNearEndCameraFeedback;
         class MuteMicsOnAutoAnswerFeedback;
         class AutoAnswerFeedback;
         class DoNotDisturbFeedback;
         class EncryptionFeedback;
         class EnergyStarFeedback;
         class VideoMuteStatesFeedback;
         class OnScreenDisplayFeedback;
         class StateSeverity;
         class StateType;
         class eStringEncoding;
         class SurroundModeType;
         class ToneControlType;
         class eTransportAdjustableProperties;
         class TransportType;
         class TransportTypes;
         class UserAttributeDataType;
         class UserAttributeRequiredForConnectionType;
         class UserAttributeType;
         class VideoServerStateObjects;
    static class AudioConnections // enum
    {
        static SIGNED_LONG_INTEGER Hdmi1;
        static SIGNED_LONG_INTEGER Hdmi2;
        static SIGNED_LONG_INTEGER Hdmi3;
        static SIGNED_LONG_INTEGER Hdmi4;
        static SIGNED_LONG_INTEGER Hdmi5;
        static SIGNED_LONG_INTEGER Hdmi6;
        static SIGNED_LONG_INTEGER Hdmi7;
        static SIGNED_LONG_INTEGER Hdmi8;
        static SIGNED_LONG_INTEGER Hdmi9;
        static SIGNED_LONG_INTEGER Hdmi10;
        static SIGNED_LONG_INTEGER Dvi1;
        static SIGNED_LONG_INTEGER Dvi2;
        static SIGNED_LONG_INTEGER Dvi3;
        static SIGNED_LONG_INTEGER Dvi4;
        static SIGNED_LONG_INTEGER Dvi5;
        static SIGNED_LONG_INTEGER Dvi6;
        static SIGNED_LONG_INTEGER Dvi7;
        static SIGNED_LONG_INTEGER Dvi8;
        static SIGNED_LONG_INTEGER Dvi9;
        static SIGNED_LONG_INTEGER Dvi10;
        static SIGNED_LONG_INTEGER DisplayPort1;
        static SIGNED_LONG_INTEGER DisplayPort2;
        static SIGNED_LONG_INTEGER DisplayPort3;
        static SIGNED_LONG_INTEGER DisplayPort4;
        static SIGNED_LONG_INTEGER DisplayPort5;
        static SIGNED_LONG_INTEGER DisplayPort6;
        static SIGNED_LONG_INTEGER DisplayPort7;
        static SIGNED_LONG_INTEGER DisplayPort8;
        static SIGNED_LONG_INTEGER DisplayPort9;
        static SIGNED_LONG_INTEGER DisplayPort10;
        static SIGNED_LONG_INTEGER Usb1;
        static SIGNED_LONG_INTEGER Usb2;
        static SIGNED_LONG_INTEGER Usb3;
        static SIGNED_LONG_INTEGER Usb4;
        static SIGNED_LONG_INTEGER Usb5;
        static SIGNED_LONG_INTEGER Antenna1;
        static SIGNED_LONG_INTEGER Antenna2;
        static SIGNED_LONG_INTEGER Network1;
        static SIGNED_LONG_INTEGER Network2;
        static SIGNED_LONG_INTEGER Network3;
        static SIGNED_LONG_INTEGER Network4;
        static SIGNED_LONG_INTEGER Network5;
        static SIGNED_LONG_INTEGER Network6;
        static SIGNED_LONG_INTEGER Network7;
        static SIGNED_LONG_INTEGER Network8;
        static SIGNED_LONG_INTEGER Network9;
        static SIGNED_LONG_INTEGER Network10;
        static SIGNED_LONG_INTEGER Input1;
        static SIGNED_LONG_INTEGER Input2;
        static SIGNED_LONG_INTEGER Input3;
        static SIGNED_LONG_INTEGER Input4;
        static SIGNED_LONG_INTEGER Input5;
        static SIGNED_LONG_INTEGER Input6;
        static SIGNED_LONG_INTEGER Input7;
        static SIGNED_LONG_INTEGER Input8;
        static SIGNED_LONG_INTEGER Input9;
        static SIGNED_LONG_INTEGER Input10;
        static SIGNED_LONG_INTEGER Input11;
        static SIGNED_LONG_INTEGER Input12;
        static SIGNED_LONG_INTEGER Input13;
        static SIGNED_LONG_INTEGER Input14;
        static SIGNED_LONG_INTEGER Input15;
        static SIGNED_LONG_INTEGER Input16;
        static SIGNED_LONG_INTEGER Input17;
        static SIGNED_LONG_INTEGER Input18;
        static SIGNED_LONG_INTEGER Input19;
        static SIGNED_LONG_INTEGER Input20;
        static SIGNED_LONG_INTEGER Input21;
        static SIGNED_LONG_INTEGER Input22;
        static SIGNED_LONG_INTEGER Input23;
        static SIGNED_LONG_INTEGER Input24;
        static SIGNED_LONG_INTEGER Input25;
        static SIGNED_LONG_INTEGER Input26;
        static SIGNED_LONG_INTEGER Input27;
        static SIGNED_LONG_INTEGER Input28;
        static SIGNED_LONG_INTEGER Input29;
        static SIGNED_LONG_INTEGER Input30;
        static SIGNED_LONG_INTEGER Input31;
        static SIGNED_LONG_INTEGER Input32;
        static SIGNED_LONG_INTEGER Input33;
        static SIGNED_LONG_INTEGER Input34;
        static SIGNED_LONG_INTEGER Input35;
        static SIGNED_LONG_INTEGER Input36;
        static SIGNED_LONG_INTEGER Input37;
        static SIGNED_LONG_INTEGER Input38;
        static SIGNED_LONG_INTEGER Input39;
        static SIGNED_LONG_INTEGER Input40;
        static SIGNED_LONG_INTEGER Input41;
        static SIGNED_LONG_INTEGER Input42;
        static SIGNED_LONG_INTEGER Input43;
        static SIGNED_LONG_INTEGER Input44;
        static SIGNED_LONG_INTEGER Input45;
        static SIGNED_LONG_INTEGER Input46;
        static SIGNED_LONG_INTEGER Input47;
        static SIGNED_LONG_INTEGER Input48;
        static SIGNED_LONG_INTEGER Input49;
        static SIGNED_LONG_INTEGER Input50;
        static SIGNED_LONG_INTEGER Aux1;
        static SIGNED_LONG_INTEGER Aux2;
        static SIGNED_LONG_INTEGER MediaInternetRadio;
        static SIGNED_LONG_INTEGER MediaSiriusRadio;
        static SIGNED_LONG_INTEGER MediaXmRadio;
        static SIGNED_LONG_INTEGER MediaSiriusXmRadio;
        static SIGNED_LONG_INTEGER MediaPandoraRadio;
        static SIGNED_LONG_INTEGER MediaLastFmRadio;
        static SIGNED_LONG_INTEGER MediaRhapsodyRadio;
        static SIGNED_LONG_INTEGER MediaHdRadio;
        static SIGNED_LONG_INTEGER Speaker1;
        static SIGNED_LONG_INTEGER Speaker2;
        static SIGNED_LONG_INTEGER Speaker3;
        static SIGNED_LONG_INTEGER Speaker4;
        static SIGNED_LONG_INTEGER Speaker5;
        static SIGNED_LONG_INTEGER Speaker6;
        static SIGNED_LONG_INTEGER Speaker7;
        static SIGNED_LONG_INTEGER Speaker8;
        static SIGNED_LONG_INTEGER Speaker9;
        static SIGNED_LONG_INTEGER Speaker10;
        static SIGNED_LONG_INTEGER Speaker11;
        static SIGNED_LONG_INTEGER Speaker12;
        static SIGNED_LONG_INTEGER Speaker13;
        static SIGNED_LONG_INTEGER Speaker14;
        static SIGNED_LONG_INTEGER Speaker15;
        static SIGNED_LONG_INTEGER Optical1;
        static SIGNED_LONG_INTEGER Optical2;
        static SIGNED_LONG_INTEGER Optical3;
        static SIGNED_LONG_INTEGER Optical4;
        static SIGNED_LONG_INTEGER Optical5;
        static SIGNED_LONG_INTEGER Optical6;
        static SIGNED_LONG_INTEGER Optical7;
        static SIGNED_LONG_INTEGER Optical8;
        static SIGNED_LONG_INTEGER Optical9;
        static SIGNED_LONG_INTEGER Optical10;
        static SIGNED_LONG_INTEGER Coax1;
        static SIGNED_LONG_INTEGER Coax2;
        static SIGNED_LONG_INTEGER Coax3;
        static SIGNED_LONG_INTEGER Coax4;
        static SIGNED_LONG_INTEGER Coax5;
        static SIGNED_LONG_INTEGER Coax6;
        static SIGNED_LONG_INTEGER Coax7;
        static SIGNED_LONG_INTEGER Coax8;
        static SIGNED_LONG_INTEGER Coax9;
        static SIGNED_LONG_INTEGER Coax10;
        static SIGNED_LONG_INTEGER AnalogAudio1;
        static SIGNED_LONG_INTEGER AnalogAudio2;
        static SIGNED_LONG_INTEGER AnalogAudio3;
        static SIGNED_LONG_INTEGER AnalogAudio4;
        static SIGNED_LONG_INTEGER AnalogAudio5;
        static SIGNED_LONG_INTEGER AnalogAudio6;
        static SIGNED_LONG_INTEGER AnalogAudio7;
        static SIGNED_LONG_INTEGER AnalogAudio8;
        static SIGNED_LONG_INTEGER AnalogAudio9;
        static SIGNED_LONG_INTEGER AnalogAudio10;
        static SIGNED_LONG_INTEGER Dvd1;
        static SIGNED_LONG_INTEGER Sat1;
        static SIGNED_LONG_INTEGER Tv1;
        static SIGNED_LONG_INTEGER Cd1;
        static SIGNED_LONG_INTEGER Tuner1;
        static SIGNED_LONG_INTEGER Phono1;
        static SIGNED_LONG_INTEGER Dss1;
        static SIGNED_LONG_INTEGER Spotify;
        static SIGNED_LONG_INTEGER YouTube;
        static SIGNED_LONG_INTEGER YouTubeTv;
        static SIGNED_LONG_INTEGER Netflix;
        static SIGNED_LONG_INTEGER Hulu;
        static SIGNED_LONG_INTEGER DirectvNow;
        static SIGNED_LONG_INTEGER AmazonVideo;
        static SIGNED_LONG_INTEGER PlaystationVue;
        static SIGNED_LONG_INTEGER SlingTv;
        static SIGNED_LONG_INTEGER Airplay;
        static SIGNED_LONG_INTEGER GoogleCast;
        static SIGNED_LONG_INTEGER DLNA;
        static SIGNED_LONG_INTEGER Tidal;
        static SIGNED_LONG_INTEGER Deezer;
        static SIGNED_LONG_INTEGER Crackle;
        static SIGNED_LONG_INTEGER OnDemand;
        static SIGNED_LONG_INTEGER Bluetooth;
        static SIGNED_LONG_INTEGER Bd1;
        static SIGNED_LONG_INTEGER Catv1;
        static SIGNED_LONG_INTEGER Game1;
        static SIGNED_LONG_INTEGER Pc1;
        static SIGNED_LONG_INTEGER Bluetooth1;
        static SIGNED_LONG_INTEGER MediaPlayer1;
        static SIGNED_LONG_INTEGER Ipod1;
        static SIGNED_LONG_INTEGER Uncontrolled;
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER None;
    };

    static class AudioConnectionTypes // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Hdmi;
        static SIGNED_LONG_INTEGER Optical;
        static SIGNED_LONG_INTEGER Coax;
        static SIGNED_LONG_INTEGER Analog;
        static SIGNED_LONG_INTEGER HdBaseT;
        static SIGNED_LONG_INTEGER DisplayPort;
        static SIGNED_LONG_INTEGER Speaker;
        static SIGNED_LONG_INTEGER Usb;
        static SIGNED_LONG_INTEGER Dvi;
        static SIGNED_LONG_INTEGER Universal;
        static SIGNED_LONG_INTEGER Antenna;
        static SIGNED_LONG_INTEGER GenericAV;
        static SIGNED_LONG_INTEGER GenericAudio;
        static SIGNED_LONG_INTEGER Network;
        static SIGNED_LONG_INTEGER None;
    };

    static class VideoConnections // enum
    {
        static SIGNED_LONG_INTEGER Vga1;
        static SIGNED_LONG_INTEGER Vga2;
        static SIGNED_LONG_INTEGER Vga3;
        static SIGNED_LONG_INTEGER Vga4;
        static SIGNED_LONG_INTEGER Vga5;
        static SIGNED_LONG_INTEGER Vga6;
        static SIGNED_LONG_INTEGER Vga7;
        static SIGNED_LONG_INTEGER Vga8;
        static SIGNED_LONG_INTEGER Vga9;
        static SIGNED_LONG_INTEGER Vga10;
        static SIGNED_LONG_INTEGER Hdmi1;
        static SIGNED_LONG_INTEGER Hdmi2;
        static SIGNED_LONG_INTEGER Hdmi3;
        static SIGNED_LONG_INTEGER Hdmi4;
        static SIGNED_LONG_INTEGER Hdmi5;
        static SIGNED_LONG_INTEGER Hdmi6;
        static SIGNED_LONG_INTEGER Hdmi7;
        static SIGNED_LONG_INTEGER Hdmi8;
        static SIGNED_LONG_INTEGER Hdmi9;
        static SIGNED_LONG_INTEGER Hdmi10;
        static SIGNED_LONG_INTEGER Dvi1;
        static SIGNED_LONG_INTEGER Dvi2;
        static SIGNED_LONG_INTEGER Dvi3;
        static SIGNED_LONG_INTEGER Dvi4;
        static SIGNED_LONG_INTEGER Dvi5;
        static SIGNED_LONG_INTEGER Dvi6;
        static SIGNED_LONG_INTEGER Dvi7;
        static SIGNED_LONG_INTEGER Dvi8;
        static SIGNED_LONG_INTEGER Dvi9;
        static SIGNED_LONG_INTEGER Dvi10;
        static SIGNED_LONG_INTEGER Component1;
        static SIGNED_LONG_INTEGER Component2;
        static SIGNED_LONG_INTEGER Component3;
        static SIGNED_LONG_INTEGER Component4;
        static SIGNED_LONG_INTEGER Component5;
        static SIGNED_LONG_INTEGER Component6;
        static SIGNED_LONG_INTEGER Component7;
        static SIGNED_LONG_INTEGER Component8;
        static SIGNED_LONG_INTEGER Component9;
        static SIGNED_LONG_INTEGER Component10;
        static SIGNED_LONG_INTEGER Composite1;
        static SIGNED_LONG_INTEGER Composite2;
        static SIGNED_LONG_INTEGER Composite3;
        static SIGNED_LONG_INTEGER Composite4;
        static SIGNED_LONG_INTEGER Composite5;
        static SIGNED_LONG_INTEGER Composite6;
        static SIGNED_LONG_INTEGER Composite7;
        static SIGNED_LONG_INTEGER Composite8;
        static SIGNED_LONG_INTEGER Composite9;
        static SIGNED_LONG_INTEGER Composite10;
        static SIGNED_LONG_INTEGER DisplayPort1;
        static SIGNED_LONG_INTEGER DisplayPort2;
        static SIGNED_LONG_INTEGER DisplayPort3;
        static SIGNED_LONG_INTEGER DisplayPort4;
        static SIGNED_LONG_INTEGER DisplayPort5;
        static SIGNED_LONG_INTEGER DisplayPort6;
        static SIGNED_LONG_INTEGER DisplayPort7;
        static SIGNED_LONG_INTEGER DisplayPort8;
        static SIGNED_LONG_INTEGER DisplayPort9;
        static SIGNED_LONG_INTEGER DisplayPort10;
        static SIGNED_LONG_INTEGER Usb1;
        static SIGNED_LONG_INTEGER Usb2;
        static SIGNED_LONG_INTEGER Usb3;
        static SIGNED_LONG_INTEGER Usb4;
        static SIGNED_LONG_INTEGER Usb5;
        static SIGNED_LONG_INTEGER Antenna1;
        static SIGNED_LONG_INTEGER Antenna2;
        static SIGNED_LONG_INTEGER Network1;
        static SIGNED_LONG_INTEGER Network2;
        static SIGNED_LONG_INTEGER Network3;
        static SIGNED_LONG_INTEGER Network4;
        static SIGNED_LONG_INTEGER Network5;
        static SIGNED_LONG_INTEGER Network6;
        static SIGNED_LONG_INTEGER Network7;
        static SIGNED_LONG_INTEGER Network8;
        static SIGNED_LONG_INTEGER Network9;
        static SIGNED_LONG_INTEGER Network10;
        static SIGNED_LONG_INTEGER Input1;
        static SIGNED_LONG_INTEGER Input2;
        static SIGNED_LONG_INTEGER Input3;
        static SIGNED_LONG_INTEGER Input4;
        static SIGNED_LONG_INTEGER Input5;
        static SIGNED_LONG_INTEGER Input6;
        static SIGNED_LONG_INTEGER Input7;
        static SIGNED_LONG_INTEGER Input8;
        static SIGNED_LONG_INTEGER Input9;
        static SIGNED_LONG_INTEGER Input10;
        static SIGNED_LONG_INTEGER Input11;
        static SIGNED_LONG_INTEGER Input12;
        static SIGNED_LONG_INTEGER Input13;
        static SIGNED_LONG_INTEGER Input14;
        static SIGNED_LONG_INTEGER Input15;
        static SIGNED_LONG_INTEGER Input16;
        static SIGNED_LONG_INTEGER Input17;
        static SIGNED_LONG_INTEGER Input18;
        static SIGNED_LONG_INTEGER Input19;
        static SIGNED_LONG_INTEGER Input20;
        static SIGNED_LONG_INTEGER Input21;
        static SIGNED_LONG_INTEGER Input22;
        static SIGNED_LONG_INTEGER Input23;
        static SIGNED_LONG_INTEGER Input24;
        static SIGNED_LONG_INTEGER Input25;
        static SIGNED_LONG_INTEGER Input26;
        static SIGNED_LONG_INTEGER Input27;
        static SIGNED_LONG_INTEGER Input28;
        static SIGNED_LONG_INTEGER Input29;
        static SIGNED_LONG_INTEGER Input30;
        static SIGNED_LONG_INTEGER Input31;
        static SIGNED_LONG_INTEGER Input32;
        static SIGNED_LONG_INTEGER Input33;
        static SIGNED_LONG_INTEGER Input34;
        static SIGNED_LONG_INTEGER Input35;
        static SIGNED_LONG_INTEGER Input36;
        static SIGNED_LONG_INTEGER Input37;
        static SIGNED_LONG_INTEGER Input38;
        static SIGNED_LONG_INTEGER Input39;
        static SIGNED_LONG_INTEGER Input40;
        static SIGNED_LONG_INTEGER Input41;
        static SIGNED_LONG_INTEGER Input42;
        static SIGNED_LONG_INTEGER Input43;
        static SIGNED_LONG_INTEGER Input44;
        static SIGNED_LONG_INTEGER Input45;
        static SIGNED_LONG_INTEGER Input46;
        static SIGNED_LONG_INTEGER Input47;
        static SIGNED_LONG_INTEGER Input48;
        static SIGNED_LONG_INTEGER Input49;
        static SIGNED_LONG_INTEGER Input50;
        static SIGNED_LONG_INTEGER Aux1;
        static SIGNED_LONG_INTEGER Aux2;
        static SIGNED_LONG_INTEGER MediaInternetRadio;
        static SIGNED_LONG_INTEGER MediaSiriusRadio;
        static SIGNED_LONG_INTEGER MediaXmRadio;
        static SIGNED_LONG_INTEGER MediaSiriusXmRadio;
        static SIGNED_LONG_INTEGER MediaPandoraRadio;
        static SIGNED_LONG_INTEGER MediaLastFmRadio;
        static SIGNED_LONG_INTEGER MediaRhapsodyRadio;
        static SIGNED_LONG_INTEGER MediaHdRadio;
        static SIGNED_LONG_INTEGER Dvd1;
        static SIGNED_LONG_INTEGER Sat1;
        static SIGNED_LONG_INTEGER Tv1;
        static SIGNED_LONG_INTEGER Cd1;
        static SIGNED_LONG_INTEGER Tuner1;
        static SIGNED_LONG_INTEGER Phono1;
        static SIGNED_LONG_INTEGER Dss1;
        static SIGNED_LONG_INTEGER Spotify;
        static SIGNED_LONG_INTEGER YouTube;
        static SIGNED_LONG_INTEGER YouTubeTv;
        static SIGNED_LONG_INTEGER Netflix;
        static SIGNED_LONG_INTEGER Hulu;
        static SIGNED_LONG_INTEGER DirectvNow;
        static SIGNED_LONG_INTEGER AmazonVideo;
        static SIGNED_LONG_INTEGER PlaystationVue;
        static SIGNED_LONG_INTEGER SlingTv;
        static SIGNED_LONG_INTEGER Airplay;
        static SIGNED_LONG_INTEGER GoogleCast;
        static SIGNED_LONG_INTEGER DLNA;
        static SIGNED_LONG_INTEGER Tidal;
        static SIGNED_LONG_INTEGER Deezer;
        static SIGNED_LONG_INTEGER Crackle;
        static SIGNED_LONG_INTEGER OnDemand;
        static SIGNED_LONG_INTEGER Bd1;
        static SIGNED_LONG_INTEGER Catv1;
        static SIGNED_LONG_INTEGER Game1;
        static SIGNED_LONG_INTEGER Pc1;
        static SIGNED_LONG_INTEGER Bluetooth1;
        static SIGNED_LONG_INTEGER MediaPlayer1;
        static SIGNED_LONG_INTEGER Ipod1;
        static SIGNED_LONG_INTEGER Uncontrolled;
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER None;
    };

    static class VideoConnectionTypes // enum
    {
        static SIGNED_LONG_INTEGER Vga;
        static SIGNED_LONG_INTEGER Hdmi;
        static SIGNED_LONG_INTEGER Component;
        static SIGNED_LONG_INTEGER Composite;
        static SIGNED_LONG_INTEGER DisplayPort;
        static SIGNED_LONG_INTEGER Network;
        static SIGNED_LONG_INTEGER Antenna;
        static SIGNED_LONG_INTEGER Usb;
        static SIGNED_LONG_INTEGER Dvi;
        static SIGNED_LONG_INTEGER SVideo;
        static SIGNED_LONG_INTEGER Other;
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER HdBaseT;
        static SIGNED_LONG_INTEGER Universal;
        static SIGNED_LONG_INTEGER GenericAV;
        static SIGNED_LONG_INTEGER GenericVideo;
        static SIGNED_LONG_INTEGER None;
    };

    static class MediaServiceStates // enum
    {
        static SIGNED_LONG_INTEGER NotActive;
        static SIGNED_LONG_INTEGER Playing;
        static SIGNED_LONG_INTEGER Paused;
        static SIGNED_LONG_INTEGER Stopped;
    };

    static class MediaServiceSubscriptionStates // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Active;
        static SIGNED_LONG_INTEGER Inactive;
    };

    static class AudioVideoExtenderType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER DirectInput;
        static SIGNED_LONG_INTEGER DirectOutput;
        static SIGNED_LONG_INTEGER IndirectInput;
        static SIGNED_LONG_INTEGER IndirectOutput;
        static SIGNED_LONG_INTEGER IndirectInputWithSwitching;
        static SIGNED_LONG_INTEGER IndirectOutputWithSwitching;
    };

    static class DcFaultState // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER OverCurrent;
        static SIGNED_LONG_INTEGER OverTemperature;
        static SIGNED_LONG_INTEGER HighDcOffset;
        static SIGNED_LONG_INTEGER UnderVoltage;
        static SIGNED_LONG_INTEGER OverVoltage;
    };

    static class TemperatureUnit // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Celcius;
        static SIGNED_LONG_INTEGER Fahrenheit;
    };

    static class DevicePropertyAttributes // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER ReadOnly;
        static SIGNED_LONG_INTEGER MinValue;
        static SIGNED_LONG_INTEGER MaxValue;
        static SIGNED_LONG_INTEGER StepSize;
    };

    static class DevicePropertyRenderHint // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER OnOff;
        static SIGNED_LONG_INTEGER OnOffValues;
        static SIGNED_LONG_INTEGER SetpointTarget;
        static SIGNED_LONG_INTEGER SetpointActual;
        static SIGNED_LONG_INTEGER Slider;
        static SIGNED_LONG_INTEGER Status;
    };

    static class DevicePropertyStates // enum
    {
        static SIGNED_LONG_INTEGER Default;
        static SIGNED_LONG_INTEGER Disabled;
        static SIGNED_LONG_INTEGER ValueNotAvailable;
    };

    static class DevicePropertyType // enum
    {
        static SIGNED_LONG_INTEGER Uninitialized;
        static SIGNED_LONG_INTEGER Boolean;
        static SIGNED_LONG_INTEGER String;
        static SIGNED_LONG_INTEGER Int16;
        static SIGNED_LONG_INTEGER UInt16;
        static SIGNED_LONG_INTEGER Int32;
        static SIGNED_LONG_INTEGER UInt32;
        static SIGNED_LONG_INTEGER Int64;
        static SIGNED_LONG_INTEGER UInt64;
        static SIGNED_LONG_INTEGER Float;
        static SIGNED_LONG_INTEGER Double;
        static SIGNED_LONG_INTEGER LocalizedString;
        static SIGNED_LONG_INTEGER Object;
        static SIGNED_LONG_INTEGER ObjectList;
    };

    static class DevicePropertyUnit // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER Celsius;
        static SIGNED_LONG_INTEGER Fahrenheit;
        static SIGNED_LONG_INTEGER Percentage;
        static SIGNED_LONG_INTEGER Millivolts;
        static SIGNED_LONG_INTEGER PartsPerMillion;
        static SIGNED_LONG_INTEGER GramsPerLiter;
        static SIGNED_LONG_INTEGER Hours;
        static SIGNED_LONG_INTEGER Minutes;
        static SIGNED_LONG_INTEGER Seconds;
        static SIGNED_LONG_INTEGER Milliseconds;
    };

    static class PoolControllerFunctions // enum
    {
        static SIGNED_LONG_INTEGER RequiredOnly;
        static SIGNED_LONG_INTEGER AirTemperature;
    };

    static class PoolFunctions // enum
    {
        static SIGNED_LONG_INTEGER RequiredOnly;
        static SIGNED_LONG_INTEGER WaterTemperature;
        static SIGNED_LONG_INTEGER PH;
        static SIGNED_LONG_INTEGER Salinity;
        static SIGNED_LONG_INTEGER FlowRate;
        static SIGNED_LONG_INTEGER Orp;
    };

    static class PoolPartType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER FilterPump;
        static SIGNED_LONG_INTEGER Heater;
        static SIGNED_LONG_INTEGER OtherPump;
        static SIGNED_LONG_INTEGER Relay;
        static SIGNED_LONG_INTEGER Sensor;
        static SIGNED_LONG_INTEGER AirTemperature;
        static SIGNED_LONG_INTEGER WaterTemperature;
        static SIGNED_LONG_INTEGER Setpoint;
        static SIGNED_LONG_INTEGER Lights;
        static SIGNED_LONG_INTEGER PoolLights;
        static SIGNED_LONG_INTEGER Chlorinator;
    };

    static class PoolType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Pool;
        static SIGNED_LONG_INTEGER Spa;
    };

    static class TemperatureScale // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Celsius;
        static SIGNED_LONG_INTEGER Fahrenheit;
    };

    static class PortDirection // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Input;
        static SIGNED_LONG_INTEGER Output;
        static SIGNED_LONG_INTEGER All;
    };

    static class PortType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER IR;
        static SIGNED_LONG_INTEGER COM;
        static SIGNED_LONG_INTEGER CEC;
        static SIGNED_LONG_INTEGER Relay;
        static SIGNED_LONG_INTEGER GenericIo;
    };

    static class SecuritySystemAlarmType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Alarm;
        static SIGNED_LONG_INTEGER Fire;
        static SIGNED_LONG_INTEGER Burglary;
        static SIGNED_LONG_INTEGER Medical;
        static SIGNED_LONG_INTEGER Tamper;
    };

    static class SecuritySystemCommandType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Away;
        static SIGNED_LONG_INTEGER AwayInstant;
        static SIGNED_LONG_INTEGER AwayBypass;
        static SIGNED_LONG_INTEGER Stay;
        static SIGNED_LONG_INTEGER StayInstant;
        static SIGNED_LONG_INTEGER Force;
        static SIGNED_LONG_INTEGER Disarm;
        static SIGNED_LONG_INTEGER ForceAway;
        static SIGNED_LONG_INTEGER ForceAwayInstant;
        static SIGNED_LONG_INTEGER ForceAwayBypass;
        static SIGNED_LONG_INTEGER ForceStay;
        static SIGNED_LONG_INTEGER ForceStayInstant;
        static SIGNED_LONG_INTEGER PerimeterInstantArm;
        static SIGNED_LONG_INTEGER PerimeterDelayArm;
    };

    static class SecuritySystemCapabilities // enum
    {
        static SIGNED_LONG_INTEGER KeypadEmulation;
        static SIGNED_LONG_INTEGER DirectControl;
        static SIGNED_LONG_INTEGER EventLog;
        static SIGNED_LONG_INTEGER Zones;
    };

    static class SecuritySystemError // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER LowBattery;
        static SIGNED_LONG_INTEGER MissingBattery;
        static SIGNED_LONG_INTEGER NoAc;
        static SIGNED_LONG_INTEGER LossOfTelco;
    };

    static class SecuritySystemKeypadFunctionButtonIcon // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Blank;
        static SIGNED_LONG_INTEGER Police;
        static SIGNED_LONG_INTEGER Fire;
        static SIGNED_LONG_INTEGER Ambulance;
        static SIGNED_LONG_INTEGER Stay;
        static SIGNED_LONG_INTEGER Away;
        static SIGNED_LONG_INTEGER Up;
        static SIGNED_LONG_INTEGER Down;
        static SIGNED_LONG_INTEGER Left;
        static SIGNED_LONG_INTEGER Right;
    };

    static class SecuritySystemKeypadFunctionType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Function;
    };

    static class SecuritySystemKeypadIndicatorStateType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Off;
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Blinking;
    };

    static class SecuritySystemKeypadLedColors // enum
    {
        static SIGNED_LONG_INTEGER Grey;
        static SIGNED_LONG_INTEGER Red;
        static SIGNED_LONG_INTEGER Yellow;
        static SIGNED_LONG_INTEGER Green;
        static SIGNED_LONG_INTEGER Blue;
        static SIGNED_LONG_INTEGER White;
    };

    static class SecuritySystemOperationalResultCode // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER UnexpectedError;
        static SIGNED_LONG_INTEGER Success;
        static SIGNED_LONG_INTEGER InvalidIdParameters;
        static SIGNED_LONG_INTEGER InvalidPasscode;
        static SIGNED_LONG_INTEGER SystemNotReady;
        static SIGNED_LONG_INTEGER CommandTimedOut;
    };

    static class SecuritySystemState // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER ArmedStay;
        static SIGNED_LONG_INTEGER ArmedStayInstant;
        static SIGNED_LONG_INTEGER ArmedAway;
        static SIGNED_LONG_INTEGER ArmedAwayInstant;
        static SIGNED_LONG_INTEGER ArmedBypass;
        static SIGNED_LONG_INTEGER ArmedBypassInstant;
        static SIGNED_LONG_INTEGER ExitDelayActive;
        static SIGNED_LONG_INTEGER EntryDelayActive;
        static SIGNED_LONG_INTEGER Disarmed;
        static SIGNED_LONG_INTEGER Ready;
        static SIGNED_LONG_INTEGER NotReady;
        static SIGNED_LONG_INTEGER ForceArmedStay;
        static SIGNED_LONG_INTEGER ForceArmedAway;
    };

    static class SecuritySystemZoneState // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Ok;
        static SIGNED_LONG_INTEGER Bypassed;
        static SIGNED_LONG_INTEGER Faulted;
        static SIGNED_LONG_INTEGER Missing;
        static SIGNED_LONG_INTEGER LowBattery;
        static SIGNED_LONG_INTEGER Tamper;
    };

    static class SecuritySystemZoneType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Door;
        static SIGNED_LONG_INTEGER Window;
        static SIGNED_LONG_INTEGER Motion;
        static SIGNED_LONG_INTEGER Contact;
        static SIGNED_LONG_INTEGER Other;
    };

    static class AlarmStateType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Burglary;
        static SIGNED_LONG_INTEGER Fire;
        static SIGNED_LONG_INTEGER Medical;
        static SIGNED_LONG_INTEGER Police;
    };

    static class ArmedState // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER ArmedStay;
        static SIGNED_LONG_INTEGER ArmedAway;
        static SIGNED_LONG_INTEGER Disarmed;
        static SIGNED_LONG_INTEGER Arming;
        static SIGNED_LONG_INTEGER Disarming;
    };

    static class ArrowDirections // enum
    {
        static SIGNED_LONG_INTEGER Up;
        static SIGNED_LONG_INTEGER Down;
        static SIGNED_LONG_INTEGER Left;
        static SIGNED_LONG_INTEGER Right;
    };

    static class AuthenticationStatusType // enum
    {
        static SIGNED_LONG_INTEGER NotAuthenticated;
        static SIGNED_LONG_INTEGER Authenticated;
        static SIGNED_LONG_INTEGER Failed;
    };

    static class AutoAnswerModes // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class AuxiliaryButtonIcon // enum
    {
        static SIGNED_LONG_INTEGER NoIcon;
        static SIGNED_LONG_INTEGER Police;
        static SIGNED_LONG_INTEGER Fire;
        static SIGNED_LONG_INTEGER Ambulance;
        static SIGNED_LONG_INTEGER Stay;
        static SIGNED_LONG_INTEGER Away;
        static SIGNED_LONG_INTEGER Up;
        static SIGNED_LONG_INTEGER Down;
    };

    static class AuxiliaryButtonLedColors // enum
    {
        static SIGNED_LONG_INTEGER Grey;
        static SIGNED_LONG_INTEGER Red;
        static SIGNED_LONG_INTEGER Yellow;
        static SIGNED_LONG_INTEGER Green;
        static SIGNED_LONG_INTEGER Blue;
        static SIGNED_LONG_INTEGER White;
    };

    static class AvrStateObjects // enum
    {
        static SIGNED_LONG_INTEGER Power;
        static SIGNED_LONG_INTEGER Input;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER Connection;
        static SIGNED_LONG_INTEGER Volume;
        static SIGNED_LONG_INTEGER Mute;
        static SIGNED_LONG_INTEGER Tuner;
        static SIGNED_LONG_INTEGER Surround;
        static SIGNED_LONG_INTEGER Authentication;
        static SIGNED_LONG_INTEGER AudioInput;
        static SIGNED_LONG_INTEGER VideoInput;
        static SIGNED_LONG_INTEGER WarmingUp;
        static SIGNED_LONG_INTEGER WarmedUp;
        static SIGNED_LONG_INTEGER CoolingDown;
        static SIGNED_LONG_INTEGER CooledDown;
        static SIGNED_LONG_INTEGER PoweredOn;
        static SIGNED_LONG_INTEGER PoweredOff;
        static SIGNED_LONG_INTEGER WarmupTimeChanged;
        static SIGNED_LONG_INTEGER CooldownTimeChanged;
    };

    static class BatteryState // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Nominal;
        static SIGNED_LONG_INTEGER LowVoltage;
        static SIGNED_LONG_INTEGER NotPresent;
    };

    static class BlurayPlayerStateObjects // enum
    {
        static SIGNED_LONG_INTEGER Power;
        static SIGNED_LONG_INTEGER PlayBackStatus;
        static SIGNED_LONG_INTEGER MediaInfo;
        static SIGNED_LONG_INTEGER Connection;
        static SIGNED_LONG_INTEGER EnergyStar;
        static SIGNED_LONG_INTEGER Authentication;
        static SIGNED_LONG_INTEGER WarmingUp;
        static SIGNED_LONG_INTEGER WarmedUp;
        static SIGNED_LONG_INTEGER CoolingDown;
        static SIGNED_LONG_INTEGER CooledDown;
        static SIGNED_LONG_INTEGER PoweredOn;
        static SIGNED_LONG_INTEGER PoweredOff;
        static SIGNED_LONG_INTEGER WarmupTimeChanged;
        static SIGNED_LONG_INTEGER CooldownTimeChanged;
    };

    static class BypassedState // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Bypassed;
        static SIGNED_LONG_INTEGER Unbypassed;
        static SIGNED_LONG_INTEGER Bypassing;
        static SIGNED_LONG_INTEGER Unbypassing;
    };

    static class CableBoxStateObjects // enum
    {
        static SIGNED_LONG_INTEGER Power;
        static SIGNED_LONG_INTEGER Channel;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER Connection;
        static SIGNED_LONG_INTEGER EnergyStar;
        static SIGNED_LONG_INTEGER Authentication;
        static SIGNED_LONG_INTEGER Volume;
        static SIGNED_LONG_INTEGER Mute;
        static SIGNED_LONG_INTEGER WarmingUp;
        static SIGNED_LONG_INTEGER WarmedUp;
        static SIGNED_LONG_INTEGER CoolingDown;
        static SIGNED_LONG_INTEGER CooledDown;
        static SIGNED_LONG_INTEGER PoweredOn;
        static SIGNED_LONG_INTEGER PoweredOff;
        static SIGNED_LONG_INTEGER ActiveMediaService;
        static SIGNED_LONG_INTEGER ActiveMediaServicePlaybackState;
        static SIGNED_LONG_INTEGER WarmupTimeChanged;
        static SIGNED_LONG_INTEGER CooldownTimeChanged;
    };

    static class CodecModel // enum
    {
        static SIGNED_LONG_INTEGER CiscoSx80Tc;
        static SIGNED_LONG_INTEGER CiscoSx80Ce;
        static SIGNED_LONG_INTEGER PolycomRpg;
    };

    static class CodecStateObjects // enum
    {
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER Camera;
        static SIGNED_LONG_INTEGER Call;
        static SIGNED_LONG_INTEGER Connection;
        static SIGNED_LONG_INTEGER Selfview;
        static SIGNED_LONG_INTEGER System;
        static SIGNED_LONG_INTEGER AllowFecc;
        static SIGNED_LONG_INTEGER MuteMicsAutoAnswer;
        static SIGNED_LONG_INTEGER DoNotDisturb;
        static SIGNED_LONG_INTEGER AutoAnswer;
        static SIGNED_LONG_INTEGER Standby;
        static SIGNED_LONG_INTEGER Encryption;
        static SIGNED_LONG_INTEGER Notification;
        static SIGNED_LONG_INTEGER Input;
        static SIGNED_LONG_INTEGER CameraPreset;
        static SIGNED_LONG_INTEGER Presentation;
        static SIGNED_LONG_INTEGER Multipoint;
        static SIGNED_LONG_INTEGER MonitorPresentationSetting;
        static SIGNED_LONG_INTEGER VideoMuteState;
        static SIGNED_LONG_INTEGER RecentCall;
        static SIGNED_LONG_INTEGER PhoneBookComplete;
        static SIGNED_LONG_INTEGER PresentationSourceCount;
    };

    static class ColorButtons // enum
    {
        static SIGNED_LONG_INTEGER Blue;
        static SIGNED_LONG_INTEGER Green;
        static SIGNED_LONG_INTEGER Red;
        static SIGNED_LONG_INTEGER Yellow;
    };

    static class eComBaudRates // enum
    {
        static SIGNED_LONG_INTEGER ComspecBaudRate300;
        static SIGNED_LONG_INTEGER ComspecBaudRate600;
        static SIGNED_LONG_INTEGER ComspecBaudRate1200;
        static SIGNED_LONG_INTEGER ComspecBaudRate1800;
        static SIGNED_LONG_INTEGER ComspecBaudRate2400;
        static SIGNED_LONG_INTEGER ComspecBaudRate3600;
        static SIGNED_LONG_INTEGER ComspecBaudRate4800;
        static SIGNED_LONG_INTEGER ComspecBaudRate7200;
        static SIGNED_LONG_INTEGER ComspecBaudRate9600;
        static SIGNED_LONG_INTEGER ComspecBaudRate14400;
        static SIGNED_LONG_INTEGER ComspecBaudRate19200;
        static SIGNED_LONG_INTEGER ComspecBaudRate28800;
        static SIGNED_LONG_INTEGER ComspecBaudRate38400;
        static SIGNED_LONG_INTEGER ComspecBaudRate57600;
        static SIGNED_LONG_INTEGER ComspecBaudRate115200;
        static SIGNED_LONG_INTEGER NotSpecified;
    };

    static class eComDataBits // enum
    {
        static INTEGER NotSpecified;
        static INTEGER ComspecDataBits7;
        static INTEGER ComspecDataBits8;
    };

    static class eComHardwareHandshakeType // enum
    {
        static SIGNED_LONG_INTEGER ComspecHardwareHandshakeNone;
        static SIGNED_LONG_INTEGER ComspecHardwareHandshakeRTS;
        static SIGNED_LONG_INTEGER ComspecHardwareHandshakeCTS;
        static SIGNED_LONG_INTEGER ComspecHardwareHandshakeRTSCTS;
        static SIGNED_LONG_INTEGER NotSpecified;
    };

    static class CommandAction // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER Hold;
        static SIGNED_LONG_INTEGER Release;
    };

    static class CommonFeatureSupport // enum
    {
        static SIGNED_LONG_INTEGER SupportsArrowKeys;
        static SIGNED_LONG_INTEGER SupportsAsterisk;
        static SIGNED_LONG_INTEGER SupportsBack;
        static SIGNED_LONG_INTEGER SupportsChangeChannel;
        static SIGNED_LONG_INTEGER SupportsChangeVolume;
        static SIGNED_LONG_INTEGER SupportsChannelFeedback;
        static SIGNED_LONG_INTEGER SupportsClear;
        static SIGNED_LONG_INTEGER SupportsColorButtons;
        static SIGNED_LONG_INTEGER SupportsCoolDownTime;
        static SIGNED_LONG_INTEGER SupportsDash;
        static SIGNED_LONG_INTEGER SupportsDisconnect;
        static SIGNED_LONG_INTEGER SupportsDiscreteMute;
        static SIGNED_LONG_INTEGER SupportsDiscretePower;
        static SIGNED_LONG_INTEGER SupportsDvrCommand;
        static SIGNED_LONG_INTEGER SupportsEnter;
        static SIGNED_LONG_INTEGER SupportsExit;
        static SIGNED_LONG_INTEGER SupportsFavorite;
        static SIGNED_LONG_INTEGER SupportsForwardScan;
        static SIGNED_LONG_INTEGER SupportsForwardSkip;
        static SIGNED_LONG_INTEGER SupportsGuide;
        static SIGNED_LONG_INTEGER SupportsHome;
        static SIGNED_LONG_INTEGER SupportsInfo;
        static SIGNED_LONG_INTEGER SupportsKeypadBackSpace;
        static SIGNED_LONG_INTEGER SupportsKeypadNumber;
        static SIGNED_LONG_INTEGER SupportsLast;
        static SIGNED_LONG_INTEGER SupportsLetterKeys;
        static SIGNED_LONG_INTEGER SupportsLive;
        static SIGNED_LONG_INTEGER SupportsMenu;
        static SIGNED_LONG_INTEGER SupportsMute;
        static SIGNED_LONG_INTEGER SupportsMuteFeedback;
        static SIGNED_LONG_INTEGER SupportsPageChange;
        static SIGNED_LONG_INTEGER SupportsPause;
        static SIGNED_LONG_INTEGER SupportsPeriod;
        static SIGNED_LONG_INTEGER SupportsPlay;
        static SIGNED_LONG_INTEGER SupportsPound;
        static SIGNED_LONG_INTEGER SupportsPowerFeedback;
        static SIGNED_LONG_INTEGER SupportsReconnect;
        static SIGNED_LONG_INTEGER SupportsRecord;
        static SIGNED_LONG_INTEGER SupportsRepeat;
        static SIGNED_LONG_INTEGER SupportsReplay;
        static SIGNED_LONG_INTEGER SupportsReturn;
        static SIGNED_LONG_INTEGER SupportsReverseScan;
        static SIGNED_LONG_INTEGER SupportsReverseSkip;
        static SIGNED_LONG_INTEGER SupportsSetChannel;
        static SIGNED_LONG_INTEGER SupportsSetVolume;
        static SIGNED_LONG_INTEGER SupportsSpeedSlow;
        static SIGNED_LONG_INTEGER SupportsStop;
        static SIGNED_LONG_INTEGER SupportsThumbsDown;
        static SIGNED_LONG_INTEGER SupportsThumbsUp;
        static SIGNED_LONG_INTEGER SupportsTogglePower;
        static SIGNED_LONG_INTEGER SupportsVolumePercentFeedback;
        static SIGNED_LONG_INTEGER SupportsWarmUpTime;
        static SIGNED_LONG_INTEGER SupportsFeedback;
        static SIGNED_LONG_INTEGER SupportsPlayBackStatusFeedback;
        static SIGNED_LONG_INTEGER SupportsTrackFeedback;
        static SIGNED_LONG_INTEGER SupportsChapterFeedback;
        static SIGNED_LONG_INTEGER SupportsTrackElapsedTimeFeedback;
        static SIGNED_LONG_INTEGER SupportsTrackRemainingTimeFeedback;
        static SIGNED_LONG_INTEGER SupportsChapterElapsedTimeFeedback;
        static SIGNED_LONG_INTEGER SupportsChapterRemainingTimeFeedback;
        static SIGNED_LONG_INTEGER SupportsTotalElapsedTimeFeedback;
        static SIGNED_LONG_INTEGER SupportsTotalRemainingTimeFeedback;
        static SIGNED_LONG_INTEGER SupportsAudio;
        static SIGNED_LONG_INTEGER SupportsDisplay;
        static SIGNED_LONG_INTEGER SupportsEject;
        static SIGNED_LONG_INTEGER SupportsOptions;
        static SIGNED_LONG_INTEGER SupportsSubtitle;
        static SIGNED_LONG_INTEGER SupportsInputFeedback;
        static SIGNED_LONG_INTEGER SupportsLampHours;
        static SIGNED_LONG_INTEGER SupportsSetInputSource;
        static SIGNED_LONG_INTEGER SupportsPanAndTilt;
        static SIGNED_LONG_INTEGER SupportsZoom;
        static SIGNED_LONG_INTEGER SupportsManualFocus;
        static SIGNED_LONG_INTEGER SupportsAutoFocus;
        static SIGNED_LONG_INTEGER SupportsIrRemoteEmulation;
        static SIGNED_LONG_INTEGER SupportsMeetings;
        static SIGNED_LONG_INTEGER SupportsSelfView;
        static SIGNED_LONG_INTEGER SupportsSelfViewPosition;
        static SIGNED_LONG_INTEGER SupportsDualVideo;
        static SIGNED_LONG_INTEGER SupportsPresentationPip;
        static SIGNED_LONG_INTEGER SupportsPictureMode;
        static SIGNED_LONG_INTEGER SupportsLocality;
        static SIGNED_LONG_INTEGER SupportsToggleVideoMute;
        static SIGNED_LONG_INTEGER SupportsSwitching;
        static SIGNED_LONG_INTEGER SupportsToggleEnergyStar;
        static SIGNED_LONG_INTEGER SupportsDiscreteEnergyStar;
        static SIGNED_LONG_INTEGER SupportsEnergyStarFeedback;
        static SIGNED_LONG_INTEGER SupportsDiscreteVideoMute;
        static SIGNED_LONG_INTEGER SupportsVideoMuteFeedback;
        static SIGNED_LONG_INTEGER SupportsOnScreenDisplayFeedback;
        static SIGNED_LONG_INTEGER SupportsFarEndCameraPresetStore;
        static SIGNED_LONG_INTEGER SupportsInput4Connector;
        static SIGNED_LONG_INTEGER SupportsFarEndPresentationSourceSelect;
        static SIGNED_LONG_INTEGER SupportsMultipointControl;
        static SIGNED_LONG_INTEGER SupportsIREmulation;
        static SIGNED_LONG_INTEGER SupportsMonitorPresentation;
        static SIGNED_LONG_INTEGER SupportsPictureLayout;
        static SIGNED_LONG_INTEGER SupportsPan;
        static SIGNED_LONG_INTEGER SupportsTilt;
        static SIGNED_LONG_INTEGER SupportsMicMute;
        static SIGNED_LONG_INTEGER SupportsRecentCallsDialing;
        static SIGNED_LONG_INTEGER SupportsPopUpMenu;
        static SIGNED_LONG_INTEGER SupportsTopMenu;
        static SIGNED_LONG_INTEGER SupportsSelect;
        static SIGNED_LONG_INTEGER SupportsToneControlFeedback;
        static SIGNED_LONG_INTEGER SupportsDiscreteToneControl;
        static SIGNED_LONG_INTEGER SupportsToggleToneControl;
        static SIGNED_LONG_INTEGER SupportsBassFeedback;
        static SIGNED_LONG_INTEGER SupportsBassDbFeedback;
        static SIGNED_LONG_INTEGER SupportsTrebleFeedback;
        static SIGNED_LONG_INTEGER SupportsTrebleDbFeedback;
        static SIGNED_LONG_INTEGER SupportsSetBass;
        static SIGNED_LONG_INTEGER SupportsChangeBass;
        static SIGNED_LONG_INTEGER SupportsSetTreble;
        static SIGNED_LONG_INTEGER SupportsChangeTreble;
        static SIGNED_LONG_INTEGER SupportsLoudnessFeedback;
        static SIGNED_LONG_INTEGER SupportsDiscreteLoudness;
        static SIGNED_LONG_INTEGER SupportsToggleLoudness;
        static SIGNED_LONG_INTEGER SupportsSurroundModeFeedback;
        static SIGNED_LONG_INTEGER SupportsSurroundModeCycle;
        static SIGNED_LONG_INTEGER SupportsTunerFeedback;
        static SIGNED_LONG_INTEGER SupportsChangeFrequency;
        static SIGNED_LONG_INTEGER SupportsSetFrequency;
        static SIGNED_LONG_INTEGER SupportsAutoFrequency;
        static SIGNED_LONG_INTEGER SupportsFrequencyBand;
        static SIGNED_LONG_INTEGER SupportsDiscreteFrequencyBand;
        static SIGNED_LONG_INTEGER SupportsPresetRecall;
        static SIGNED_LONG_INTEGER SupportsPresetStore;
        static SIGNED_LONG_INTEGER SupportsSearch;
        static SIGNED_LONG_INTEGER SupportsSetAudioInputSource;
        static SIGNED_LONG_INTEGER SupportsSetVideoInputSource;
        static SIGNED_LONG_INTEGER SupportsAudioInputFeedback;
        static SIGNED_LONG_INTEGER SupportsVideoInputFeedback;
        static SIGNED_LONG_INTEGER SupportsSetAudioOutputSource;
        static SIGNED_LONG_INTEGER SupportsSetVideoOutputSource;
        static SIGNED_LONG_INTEGER SupportsAudioOutputFeedback;
        static SIGNED_LONG_INTEGER SupportsVideoOutputFeedback;
        static SIGNED_LONG_INTEGER SupportsUsername;
        static SIGNED_LONG_INTEGER SupportsPassword;
        static SIGNED_LONG_INTEGER SupportsSirius;
        static SIGNED_LONG_INTEGER SupportsXm;
        static SIGNED_LONG_INTEGER SupportsSiriusXm;
        static SIGNED_LONG_INTEGER SupportsHdRadio;
        static SIGNED_LONG_INTEGER SupportsInternetRadio;
        static SIGNED_LONG_INTEGER SupportsLastFm;
        static SIGNED_LONG_INTEGER SupportsPandora;
        static SIGNED_LONG_INTEGER SupportsRhapsody;
        static SIGNED_LONG_INTEGER SupportsChangePreset;
        static SIGNED_LONG_INTEGER SupportsPlayPause;
        static SIGNED_LONG_INTEGER SupportsSpotify;
        static SIGNED_LONG_INTEGER SupportsYouTube;
        static SIGNED_LONG_INTEGER SupportsYouTubeTv;
        static SIGNED_LONG_INTEGER SupportsNetflix;
        static SIGNED_LONG_INTEGER SupportsHulu;
        static SIGNED_LONG_INTEGER SupportsDirectvNow;
        static SIGNED_LONG_INTEGER SupportsAmazonVideo;
        static SIGNED_LONG_INTEGER SupportsPlaystationVue;
        static SIGNED_LONG_INTEGER SupportsSlingTv;
        static SIGNED_LONG_INTEGER SupportsAirplay;
        static SIGNED_LONG_INTEGER SupportsGoogleCast;
        static SIGNED_LONG_INTEGER SupportsDlna;
        static SIGNED_LONG_INTEGER SupportsTidal;
        static SIGNED_LONG_INTEGER SupportsDeezer;
        static SIGNED_LONG_INTEGER SupportsCrackle;
        static SIGNED_LONG_INTEGER SupportsOnDemand;
        static SIGNED_LONG_INTEGER SupportsGooglePlay;
        static SIGNED_LONG_INTEGER SupportsBluetooth;
        static SIGNED_LONG_INTEGER SupportsTivo;
        static SIGNED_LONG_INTEGER SupportsRSkip;
        static SIGNED_LONG_INTEGER SupportsFSkip;
        static SIGNED_LONG_INTEGER SupportsKeypadEmulation;
        static SIGNED_LONG_INTEGER SupportsLogin;
        static SIGNED_LONG_INTEGER SupportsUDLLogin;
        static SIGNED_LONG_INTEGER SupportsRequestSoftwareVersion;
        static SIGNED_LONG_INTEGER SupportsRequestSoftwareVersionDifferences;
        static SIGNED_LONG_INTEGER SupportsRequestSystemStatus;
        static SIGNED_LONG_INTEGER SupportsRequestResourceName;
        static SIGNED_LONG_INTEGER SupportsRequestResourcePermission;
        static SIGNED_LONG_INTEGER SupportsBypassZones;
        static SIGNED_LONG_INTEGER SupportsUnbypassZones;
        static SIGNED_LONG_INTEGER SupportsResourceArmAway;
        static SIGNED_LONG_INTEGER SupportsResourceArmAwayInstant;
        static SIGNED_LONG_INTEGER SupportsResourceArmAwayDelayed;
        static SIGNED_LONG_INTEGER SupportsResourceArmDelayed;
        static SIGNED_LONG_INTEGER SupportsResourceArmInstant;
        static SIGNED_LONG_INTEGER SupportsResourceArmStay;
        static SIGNED_LONG_INTEGER SupportsResourceArmStayInstant;
        static SIGNED_LONG_INTEGER SupportsResourceArmStayDelayed;
        static SIGNED_LONG_INTEGER SupportsDisarm;
        static SIGNED_LONG_INTEGER SupportsDisarmResource;
        static SIGNED_LONG_INTEGER SupportsRequestLog;
        static SIGNED_LONG_INTEGER SupportsRequestLogSetAmount;
        static SIGNED_LONG_INTEGER SupportsRequestFeatures;
        static SIGNED_LONG_INTEGER SupportsRequestSetup;
        static SIGNED_LONG_INTEGER SupportsRequestAreaInfo;
        static SIGNED_LONG_INTEGER SupportsRequestZoneInfo;
        static SIGNED_LONG_INTEGER SupportsRequestOutputInfo;
        static SIGNED_LONG_INTEGER SupportsRequestDoorInfo;
        static SIGNED_LONG_INTEGER SupportsRequestDeviceInfo;
        static SIGNED_LONG_INTEGER SupportsRequestAreaResourceStatus;
        static SIGNED_LONG_INTEGER SupportsRequestZoneResourceStatus;
        static SIGNED_LONG_INTEGER SupportsRequestOutputResourceStatus;
        static SIGNED_LONG_INTEGER SupportsRequestDoorResourceStatus;
        static SIGNED_LONG_INTEGER SupportsRequestDeviceResourceStatus;
        static SIGNED_LONG_INTEGER SupportsSetResourceState;
        static SIGNED_LONG_INTEGER SupportsRequestBypassedZones;
        static SIGNED_LONG_INTEGER SupportsSilenceBells;
        static SIGNED_LONG_INTEGER SupportsResetSensors;
        static SIGNED_LONG_INTEGER SupportsSubscribeResourceOnOffState;
        static SIGNED_LONG_INTEGER SupportsSubscribeResourceReadyState;
        static SIGNED_LONG_INTEGER SupportsSubscribeResourceGeneralState;
        static SIGNED_LONG_INTEGER SupportsSubscribeDeviceMessages;
        static SIGNED_LONG_INTEGER SupportsSubscribeDeviceLogging;
        static SIGNED_LONG_INTEGER SupportsSubscribeDeviceConfigurationChange;
        static SIGNED_LONG_INTEGER SupportsSubscribe;
        static SIGNED_LONG_INTEGER SupportsRequestAlarm;
        static SIGNED_LONG_INTEGER SupportsRequestAreasNotReadyToArm;
        static SIGNED_LONG_INTEGER SupportsArmAll;
        static SIGNED_LONG_INTEGER SupportsDisarmAll;
        static SIGNED_LONG_INTEGER SupportsBypassAll;
        static SIGNED_LONG_INTEGER SupportsUnbypassAll;
        static SIGNED_LONG_INTEGER SupportsKeypadStatusText;
        static SIGNED_LONG_INTEGER SupportsUpDown;
        static SIGNED_LONG_INTEGER SupportsLeftRight;
        static SIGNED_LONG_INTEGER SupportsRequestUsers;
        static SIGNED_LONG_INTEGER SupportsRequestAreaAlarm;
        static SIGNED_LONG_INTEGER SupportsRequestZoneAlarm;
        static SIGNED_LONG_INTEGER SupportsRequestTamper;
        static SIGNED_LONG_INTEGER SupportsRequestAlarmMemory;
        static SIGNED_LONG_INTEGER SupportsRequestAreaAlarmMemory;
        static SIGNED_LONG_INTEGER SupportsRequestZoneAlarmMemory;
        static SIGNED_LONG_INTEGER SupportsRequestFireAlarm;
        static SIGNED_LONG_INTEGER SupportsRequestFireAlarmMemory;
        static SIGNED_LONG_INTEGER SupportsArm;
        static SIGNED_LONG_INTEGER SupportsRequestAreaExitTime;
        static SIGNED_LONG_INTEGER SupportsRequestAreaInExitDelay;
        static SIGNED_LONG_INTEGER SupportsRequestAreaInEntryDelay;
        static SIGNED_LONG_INTEGER SupportsDiscreteSpeakerProtect;
        static SIGNED_LONG_INTEGER SupportsSpeakerProtectToggle;
        static SIGNED_LONG_INTEGER SupportsAudioIsClippingFeedback;
        static SIGNED_LONG_INTEGER SupportsDcFaultStateFeedback;
    };

    static class CommonCommandGroupType // enum
    {
        static SIGNED_LONG_INTEGER Volume;
        static SIGNED_LONG_INTEGER Mute;
        static SIGNED_LONG_INTEGER MicMute;
        static SIGNED_LONG_INTEGER ConferenceCall;
        static SIGNED_LONG_INTEGER DisplayName;
        static SIGNED_LONG_INTEGER RemoteNumber;
        static SIGNED_LONG_INTEGER CallbackNumber;
        static SIGNED_LONG_INTEGER CallType;
        static SIGNED_LONG_INTEGER CallSpeed;
        static SIGNED_LONG_INTEGER CallDirection;
        static SIGNED_LONG_INTEGER CallStatus;
        static SIGNED_LONG_INTEGER Camera;
        static SIGNED_LONG_INTEGER Input;
        static SIGNED_LONG_INTEGER Selfview;
        static SIGNED_LONG_INTEGER Dial;
        static SIGNED_LONG_INTEGER Phonebook;
        static SIGNED_LONG_INTEGER Video;
        static SIGNED_LONG_INTEGER Booking;
        static SIGNED_LONG_INTEGER Other;
        static SIGNED_LONG_INTEGER SystemName;
        static SIGNED_LONG_INTEGER SystemH323Id;
        static SIGNED_LONG_INTEGER SystemE164Alias;
        static SIGNED_LONG_INTEGER SystemSoftwareVersion;
        static SIGNED_LONG_INTEGER SystemSerialNumber;
        static SIGNED_LONG_INTEGER SystemInfo;
        static SIGNED_LONG_INTEGER AllowFecc;
        static SIGNED_LONG_INTEGER MuteMicsAutoAnswer;
        static SIGNED_LONG_INTEGER DoNotDisturb;
        static SIGNED_LONG_INTEGER AutoAnswer;
        static SIGNED_LONG_INTEGER Standby;
        static SIGNED_LONG_INTEGER Encryption;
        static SIGNED_LONG_INTEGER Notification;
        static SIGNED_LONG_INTEGER NotificationButtonOneText;
        static SIGNED_LONG_INTEGER NotificationButtonTwoText;
        static SIGNED_LONG_INTEGER NotificationButtonThreeText;
        static SIGNED_LONG_INTEGER NotificationButtonFourText;
        static SIGNED_LONG_INTEGER NotificationButtonFiveText;
        static SIGNED_LONG_INTEGER NotificationType;
        static SIGNED_LONG_INTEGER NotificationText;
        static SIGNED_LONG_INTEGER NotificationTitle;
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Presentation;
        static SIGNED_LONG_INTEGER SystemIpAddress;
        static SIGNED_LONG_INTEGER SystemSipUri;
        static SIGNED_LONG_INTEGER NotificationClear;
        static SIGNED_LONG_INTEGER NotificationDuration;
        static SIGNED_LONG_INTEGER Multipoint;
        static SIGNED_LONG_INTEGER MonitorPresentationSetting;
        static SIGNED_LONG_INTEGER IrRemoteEmulation;
        static SIGNED_LONG_INTEGER VideoMute;
        static SIGNED_LONG_INTEGER Power;
        static SIGNED_LONG_INTEGER LampHours;
        static SIGNED_LONG_INTEGER EnergyStar;
        static SIGNED_LONG_INTEGER OnScreenDisplay;
        static SIGNED_LONG_INTEGER Arrow;
        static SIGNED_LONG_INTEGER Keypad;
        static SIGNED_LONG_INTEGER Channel;
        static SIGNED_LONG_INTEGER Page;
        static SIGNED_LONG_INTEGER PlayBackStatus;
        static SIGNED_LONG_INTEGER TrackFeedback;
        static SIGNED_LONG_INTEGER ChapterFeedback;
        static SIGNED_LONG_INTEGER TrackElapsedTime;
        static SIGNED_LONG_INTEGER TrackRemainingTime;
        static SIGNED_LONG_INTEGER ChapterElapsedTime;
        static SIGNED_LONG_INTEGER ChapterRemainingTime;
        static SIGNED_LONG_INTEGER TotalElapsedTime;
        static SIGNED_LONG_INTEGER TotalRemainingTime;
        static SIGNED_LONG_INTEGER Connection;
        static SIGNED_LONG_INTEGER AckNak;
        static SIGNED_LONG_INTEGER Reboot;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER SurroundMode;
        static SIGNED_LONG_INTEGER Tuner;
        static SIGNED_LONG_INTEGER Output;
        static SIGNED_LONG_INTEGER Bass;
        static SIGNED_LONG_INTEGER Treble;
        static SIGNED_LONG_INTEGER Loudness;
        static SIGNED_LONG_INTEGER ToneControl;
        static SIGNED_LONG_INTEGER ToneState;
        static SIGNED_LONG_INTEGER TunerFrequency;
        static SIGNED_LONG_INTEGER TunerFrequencyBand;
        static SIGNED_LONG_INTEGER AudioInput;
        static SIGNED_LONG_INTEGER Arm;
        static SIGNED_LONG_INTEGER Disarm;
        static SIGNED_LONG_INTEGER Bypass;
        static SIGNED_LONG_INTEGER Unbypass;
        static SIGNED_LONG_INTEGER Login;
        static SIGNED_LONG_INTEGER SoftwareVersionDifferences;
        static SIGNED_LONG_INTEGER MonitoringDeviceInfo;
        static SIGNED_LONG_INTEGER MonitoringResourceName;
        static SIGNED_LONG_INTEGER MonitoringResourcePermissionArea;
        static SIGNED_LONG_INTEGER MonitoringResourcePermissionZone;
        static SIGNED_LONG_INTEGER MonitoringLog;
        static SIGNED_LONG_INTEGER Heartbeat;
        static SIGNED_LONG_INTEGER MonitoringSystemStatus;
        static SIGNED_LONG_INTEGER MonitoringSystemFeatures;
        static SIGNED_LONG_INTEGER MonitoringSystemSetup;
        static SIGNED_LONG_INTEGER MonitoringAreaInfo;
        static SIGNED_LONG_INTEGER MonitoringZoneInfo;
        static SIGNED_LONG_INTEGER MonitoringAreaCount;
        static SIGNED_LONG_INTEGER MonitoringZoneCount;
        static SIGNED_LONG_INTEGER MonitoringAreaResourceStatus;
        static SIGNED_LONG_INTEGER MonitoringZoneResourceStatus;
        static SIGNED_LONG_INTEGER MonitoringAreaInExitDelay;
        static SIGNED_LONG_INTEGER MonitoringAreaInEntryDelay;
        static SIGNED_LONG_INTEGER MonitoringInfo;
        static SIGNED_LONG_INTEGER SetResourceState;
        static SIGNED_LONG_INTEGER MonitoringBypassedZones;
        static SIGNED_LONG_INTEGER SilenceSensors;
        static SIGNED_LONG_INTEGER ResetSensors;
        static SIGNED_LONG_INTEGER SubscribeResourceReadyState;
        static SIGNED_LONG_INTEGER SubscribeDeviceMessages;
        static SIGNED_LONG_INTEGER SubscribeDeviceLogging;
        static SIGNED_LONG_INTEGER SubscribeDeviceConfigurationChange;
        static SIGNED_LONG_INTEGER Subscribe;
        static SIGNED_LONG_INTEGER MonitoringAlarm;
        static SIGNED_LONG_INTEGER MonitoringAreasNotReadyToArm;
        static SIGNED_LONG_INTEGER ArmAll;
        static SIGNED_LONG_INTEGER DisarmAll;
        static SIGNED_LONG_INTEGER MediaService;
        static SIGNED_LONG_INTEGER MediaServicePlaybackState;
        static SIGNED_LONG_INTEGER MediaServiceSubscriptionState;
        static SIGNED_LONG_INTEGER ArtworkMode;
        static SIGNED_LONG_INTEGER DisplayMode;
        static SIGNED_LONG_INTEGER MonitoringUsers;
        static SIGNED_LONG_INTEGER MonitoringAreaAlarm;
        static SIGNED_LONG_INTEGER MonitoringZoneAlarm;
        static SIGNED_LONG_INTEGER MonitoringTamper;
        static SIGNED_LONG_INTEGER MonitoringAlarmMemory;
        static SIGNED_LONG_INTEGER MonitoringAreaAlarmMemory;
        static SIGNED_LONG_INTEGER MonitoringZoneAlarmMemory;
        static SIGNED_LONG_INTEGER MonitoringFireAlarm;
        static SIGNED_LONG_INTEGER MonitoringFireAlarmMemory;
        static SIGNED_LONG_INTEGER MonitoringAreaExitTime;
        static SIGNED_LONG_INTEGER MonitoringSoftwareVersion;
        static SIGNED_LONG_INTEGER AvrZone1;
        static SIGNED_LONG_INTEGER AvrZone2;
        static SIGNED_LONG_INTEGER AvrZone3;
        static SIGNED_LONG_INTEGER AvrZone4;
        static SIGNED_LONG_INTEGER AvrZone5;
        static SIGNED_LONG_INTEGER AudioVideoSwitcher;
        static SIGNED_LONG_INTEGER AudioVideoExtender;
        static SIGNED_LONG_INTEGER SpeakerProtect;
        static SIGNED_LONG_INTEGER Temperature;
        static SIGNED_LONG_INTEGER TemperatureUnits;
        static SIGNED_LONG_INTEGER DcFaultState;
        static SIGNED_LONG_INTEGER ClippingAudio;
        static SIGNED_LONG_INTEGER CecPortCommunication;
        static SIGNED_LONG_INTEGER ComPortCommunication;
        static SIGNED_LONG_INTEGER RelayPortCommunication;
        static SIGNED_LONG_INTEGER GenericIoAnalogCommunication;
        static SIGNED_LONG_INTEGER GenericIoDigitalCommunication;
    };

    static class CommunicationType // enum
    {
        static SIGNED_LONG_INTEGER Serial;
        static SIGNED_LONG_INTEGER Ip;
        static SIGNED_LONG_INTEGER Ir;
        static SIGNED_LONG_INTEGER Cec;
        static SIGNED_LONG_INTEGER CrestronConnected;
        static SIGNED_LONG_INTEGER CloudConnected;
        static SIGNED_LONG_INTEGER IpServer;
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER NotSpecified;
    };

    static class eComParityType // enum
    {
        static SIGNED_LONG_INTEGER ComspecParityNone;
        static SIGNED_LONG_INTEGER ComspecParityEven;
        static SIGNED_LONG_INTEGER ComspecParityOdd;
        static SIGNED_LONG_INTEGER NotSpecified;
    };

    static class eComportCapabilities // enum
    {
        static SIGNED_LONG_INTEGER COMPORT_SUPPORTS_RS232;
        static SIGNED_LONG_INTEGER COMPORT_SUPPORTS_RS422;
        static SIGNED_LONG_INTEGER COMPORT_SUPPORTS_RS485;
        static SIGNED_LONG_INTEGER COMPORT_SUPPORTS_RTS;
        static SIGNED_LONG_INTEGER COMPORT_SUPPORTS_CTS;
    };

    static class eComProtocolType // enum
    {
        static SIGNED_LONG_INTEGER ComspecProtocolRS232;
        static SIGNED_LONG_INTEGER ComspecProtocolRS422;
        static SIGNED_LONG_INTEGER ComspecProtocolRS485;
        static SIGNED_LONG_INTEGER NotSpecified;
    };

    static class eComSoftwareHandshakeType // enum
    {
        static SIGNED_LONG_INTEGER ComspecSoftwareHandshakeNone;
        static SIGNED_LONG_INTEGER ComspecSoftwareHandshakeXON;
        static SIGNED_LONG_INTEGER ComspecSoftwareHandshakeXONT;
        static SIGNED_LONG_INTEGER ComspecSoftwareHandshakeXONR;
        static SIGNED_LONG_INTEGER NotSpecified;
    };

    static class eComStopBits // enum
    {
        static SIGNED_LONG_INTEGER ComspecStopBits1;
        static SIGNED_LONG_INTEGER ComspecStopBits2;
        static SIGNED_LONG_INTEGER NotSpecified;
    };

    static class ConferenceCallChange // enum
    {
        static SIGNED_LONG_INTEGER Status;
        static SIGNED_LONG_INTEGER Type;
        static SIGNED_LONG_INTEGER RemoteNumber;
        static SIGNED_LONG_INTEGER CallbackNumber;
        static SIGNED_LONG_INTEGER RemoteSite;
        static SIGNED_LONG_INTEGER Duration;
        static SIGNED_LONG_INTEGER TransmitRate;
        static SIGNED_LONG_INTEGER Direction;
        static SIGNED_LONG_INTEGER ReceiveRate;
        static SIGNED_LONG_INTEGER SupportPresentation;
        static SIGNED_LONG_INTEGER Id;
    };

    static class ConferenceCallDirection // enum
    {
        static SIGNED_LONG_INTEGER Incoming;
        static SIGNED_LONG_INTEGER Outgoing;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class ConferenceCallEncryption // enum
    {
        static SIGNED_LONG_INTEGER Off;
        static SIGNED_LONG_INTEGER On;
    };

    static class ConferenceCallProtocol // enum
    {
        static SIGNED_LONG_INTEGER Auto;
        static SIGNED_LONG_INTEGER H323;
        static SIGNED_LONG_INTEGER Sip;
        static SIGNED_LONG_INTEGER H320;
        static SIGNED_LONG_INTEGER Isdn;
        static SIGNED_LONG_INTEGER Ip;
        static SIGNED_LONG_INTEGER Phone;
        static SIGNED_LONG_INTEGER Ldap;
        static SIGNED_LONG_INTEGER Lync;
        static SIGNED_LONG_INTEGER Gds;
        static SIGNED_LONG_INTEGER SipPhone;
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Spark;
    };

    static class ConferenceCallRates // enum
    {
        static SIGNED_LONG_INTEGER Default;
        static SIGNED_LONG_INTEGER Rate64Kbps;
        static SIGNED_LONG_INTEGER Rate128Kbps;
        static SIGNED_LONG_INTEGER Rate256Kbps;
        static SIGNED_LONG_INTEGER Rate384Kbps;
        static SIGNED_LONG_INTEGER Rate512Kbps;
        static SIGNED_LONG_INTEGER Rate768Kbps;
        static SIGNED_LONG_INTEGER Rate1024Kbps;
        static SIGNED_LONG_INTEGER Rate1152Kbps;
        static SIGNED_LONG_INTEGER Rate1472Kbps;
        static SIGNED_LONG_INTEGER Rate1920Kbps;
        static SIGNED_LONG_INTEGER Rate2048Kbps;
        static SIGNED_LONG_INTEGER Rate2240Kbps;
        static SIGNED_LONG_INTEGER Rate2560Kbps;
        static SIGNED_LONG_INTEGER Rate3072Kbps;
        static SIGNED_LONG_INTEGER Rate3840Kbps;
        static SIGNED_LONG_INTEGER Rate4000Kbps;
        static SIGNED_LONG_INTEGER Rate4096Kbps;
        static SIGNED_LONG_INTEGER Rate6000Kbps;
        static SIGNED_LONG_INTEGER Rate6144Kbps;
    };

    static class ConferenceCallStatus // enum
    {
        static SIGNED_LONG_INTEGER Idle;
        static SIGNED_LONG_INTEGER Dialling;
        static SIGNED_LONG_INTEGER Opened;
        static SIGNED_LONG_INTEGER Ringing;
        static SIGNED_LONG_INTEGER Connecting;
        static SIGNED_LONG_INTEGER Connected;
        static SIGNED_LONG_INTEGER Disconnecting;
        static SIGNED_LONG_INTEGER OnHold;
        static SIGNED_LONG_INTEGER EarlyMedia;
        static SIGNED_LONG_INTEGER Preserved;
        static SIGNED_LONG_INTEGER RemotePreserved;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class ConferenceCallType // enum
    {
        static SIGNED_LONG_INTEGER Video;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER AudioCanEscalate;
        static SIGNED_LONG_INTEGER ForwardAllCall;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class DeviceTypes // enum
    {
        static SIGNED_LONG_INTEGER FlatPanelDisplay;
        static SIGNED_LONG_INTEGER BlurayPlayer;
        static SIGNED_LONG_INTEGER CableBox;
        static SIGNED_LONG_INTEGER VideoServer;
        static SIGNED_LONG_INTEGER VideoConferenceCodec;
        static SIGNED_LONG_INTEGER AlarmSystem;
        static SIGNED_LONG_INTEGER PtzCamera;
        static SIGNED_LONG_INTEGER AvReceiver;
        static SIGNED_LONG_INTEGER Projector;
        static SIGNED_LONG_INTEGER SecuritySystem;
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER PoolController;
        static SIGNED_LONG_INTEGER Amplifier;
        static SIGNED_LONG_INTEGER Appliance;
        static SIGNED_LONG_INTEGER AudioProcessor;
        static SIGNED_LONG_INTEGER Fan;
        static SIGNED_LONG_INTEGER Fireplace;
        static SIGNED_LONG_INTEGER GameConsole;
        static SIGNED_LONG_INTEGER GarageDoor;
        static SIGNED_LONG_INTEGER Hvac;
        static SIGNED_LONG_INTEGER IrrigationSystem;
        static SIGNED_LONG_INTEGER Light;
        static SIGNED_LONG_INTEGER Lock;
        static SIGNED_LONG_INTEGER Outlet;
        static SIGNED_LONG_INTEGER PowerController;
        static SIGNED_LONG_INTEGER Printer;
        static SIGNED_LONG_INTEGER ProjectorLift;
        static SIGNED_LONG_INTEGER Router;
        static SIGNED_LONG_INTEGER Scanner;
        static SIGNED_LONG_INTEGER Screen;
        static SIGNED_LONG_INTEGER Sensor;
        static SIGNED_LONG_INTEGER Speaker;
        static SIGNED_LONG_INTEGER Shade;
        static SIGNED_LONG_INTEGER Vacuum;
        static SIGNED_LONG_INTEGER Vehicle;
        static SIGNED_LONG_INTEGER Gateway;
        static SIGNED_LONG_INTEGER AudioVideoSwitcher;
        static SIGNED_LONG_INTEGER Platform;
        static SIGNED_LONG_INTEGER AVSwitcher;
        static SIGNED_LONG_INTEGER AudioMixer;
        static SIGNED_LONG_INTEGER NetworkSwitch;
        static SIGNED_LONG_INTEGER CustomConferencing;
    };

    static class Direction // enum
    {
        static SIGNED_LONG_INTEGER Input;
        static SIGNED_LONG_INTEGER Output;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class DisplayStateObjects // enum
    {
        static SIGNED_LONG_INTEGER Power;
        static SIGNED_LONG_INTEGER Input;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER Connection;
        static SIGNED_LONG_INTEGER LampHours;
        static SIGNED_LONG_INTEGER EnergyStar;
        static SIGNED_LONG_INTEGER VideoMute;
        static SIGNED_LONG_INTEGER Volume;
        static SIGNED_LONG_INTEGER Mute;
        static SIGNED_LONG_INTEGER Authentication;
        static SIGNED_LONG_INTEGER AudioInput;
        static SIGNED_LONG_INTEGER VideoInput;
        static SIGNED_LONG_INTEGER WarmingUp;
        static SIGNED_LONG_INTEGER WarmedUp;
        static SIGNED_LONG_INTEGER CoolingDown;
        static SIGNED_LONG_INTEGER CooledDown;
        static SIGNED_LONG_INTEGER PoweredOn;
        static SIGNED_LONG_INTEGER PoweredOff;
        static SIGNED_LONG_INTEGER ActiveMediaService;
        static SIGNED_LONG_INTEGER ActiveMediaServicePlaybackState;
        static SIGNED_LONG_INTEGER Channel;
        static SIGNED_LONG_INTEGER WarmupTimeChanged;
        static SIGNED_LONG_INTEGER CooldownTimeChanged;
    };

    static class DownloadManagerErrorType // enum
    {
        static SIGNED_LONG_INTEGER Search;
        static SIGNED_LONG_INTEGER Download;
    };

    static class EndPointLocation // enum
    {
        static SIGNED_LONG_INTEGER NearEnd;
        static SIGNED_LONG_INTEGER FarEnd;
    };

    static class ErrorState // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Nominal;
        static SIGNED_LONG_INTEGER Generic;
        static SIGNED_LONG_INTEGER Missing;
        static SIGNED_LONG_INTEGER Unassigned;
    };

    static class EthernetAdapterType // enum
    {
        static SIGNED_LONG_INTEGER EthernetUnknownAdapter;
        static SIGNED_LONG_INTEGER EthernetLANAdapter;
        static SIGNED_LONG_INTEGER EthernetCSAdapter;
        static SIGNED_LONG_INTEGER EthernetWIFIAdapter;
        static SIGNED_LONG_INTEGER EthernetLAN2Adapter;
    };

    static class ethernetProtocol // enum
    {
        static SIGNED_LONG_INTEGER Tcp;
        static SIGNED_LONG_INTEGER NotSpecified;
    };

    static class FeedbackSupportEnum // enum
    {
        static SIGNED_LONG_INTEGER NoSupport;
        static SIGNED_LONG_INTEGER HeaderOnly;
        static SIGNED_LONG_INTEGER FullSupport;
    };

    static class FrequencyBand // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Am;
        static SIGNED_LONG_INTEGER Fm;
    };

    static class IrAction // enum
    {
        static SIGNED_LONG_INTEGER Start;
        static SIGNED_LONG_INTEGER Stop;
    };

    static class IrActions // enum
    {
        static SIGNED_LONG_INTEGER Press;
        static SIGNED_LONG_INTEGER Release;
        static SIGNED_LONG_INTEGER Pulse;
    };

    static class LetterButtons // enum
    {
        static SIGNED_LONG_INTEGER A;
        static SIGNED_LONG_INTEGER B;
        static SIGNED_LONG_INTEGER C;
        static SIGNED_LONG_INTEGER D;
    };

    static class LockState // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Unlocked;
        static SIGNED_LONG_INTEGER Locked;
    };

    static class MediaPlayerPlaypackStatus // enum
    {
        static SIGNED_LONG_INTEGER Play;
        static SIGNED_LONG_INTEGER PlayAll;
        static SIGNED_LONG_INTEGER Pause;
        static SIGNED_LONG_INTEGER Previous;
        static SIGNED_LONG_INTEGER Next;
        static SIGNED_LONG_INTEGER Shuffle;
        static SIGNED_LONG_INTEGER Repeat;
        static SIGNED_LONG_INTEGER StatusMsgResponse;
        static SIGNED_LONG_INTEGER GetMenu;
        static SIGNED_LONG_INTEGER Rewind;
        static SIGNED_LONG_INTEGER Ffwd;
    };

    static class MessageType // enum
    {
        static SIGNED_LONG_INTEGER Popup;
        static SIGNED_LONG_INTEGER Alert;
        static SIGNED_LONG_INTEGER IncomingCall;
    };

    static class PhonebookContactType // enum
    {
        static SIGNED_LONG_INTEGER Root;
        static SIGNED_LONG_INTEGER Directory;
        static SIGNED_LONG_INTEGER Contact;
    };

    static class PhonebookLocation // enum
    {
        static SIGNED_LONG_INTEGER Corporate;
        static SIGNED_LONG_INTEGER Local;
        static SIGNED_LONG_INTEGER Favorites;
        static SIGNED_LONG_INTEGER Recent;
        static SIGNED_LONG_INTEGER FacilityService;
    };

    static class PipLocations // enum
    {
        static SIGNED_LONG_INTEGER UpperLeft;
        static SIGNED_LONG_INTEGER UpperCenter;
        static SIGNED_LONG_INTEGER UpperRight;
        static SIGNED_LONG_INTEGER CenterLeft;
        static SIGNED_LONG_INTEGER CenterRight;
        static SIGNED_LONG_INTEGER LowerLeft;
        static SIGNED_LONG_INTEGER LowerRight;
    };

    static class PlayBackStatus // enum
    {
        static SIGNED_LONG_INTEGER NoDisc;
        static SIGNED_LONG_INTEGER Loading;
        static SIGNED_LONG_INTEGER Open;
        static SIGNED_LONG_INTEGER Close;
        static SIGNED_LONG_INTEGER Play;
        static SIGNED_LONG_INTEGER Pause;
        static SIGNED_LONG_INTEGER Stop;
        static SIGNED_LONG_INTEGER Step;
        static SIGNED_LONG_INTEGER ReverseScan;
        static SIGNED_LONG_INTEGER FowardScan;
        static SIGNED_LONG_INTEGER ScreenSaver;
        static SIGNED_LONG_INTEGER Other;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class PresetEvent // enum
    {
        static SIGNED_LONG_INTEGER Saved;
        static SIGNED_LONG_INTEGER Recalled;
        static SIGNED_LONG_INTEGER Cleared;
    };

    static class RampingToneState // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER Up;
        static SIGNED_LONG_INTEGER Down;
    };

    static class RampingVolumeState // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER Up;
        static SIGNED_LONG_INTEGER Down;
    };

    static class ResourceStatus // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Unassigned;
        static SIGNED_LONG_INTEGER Armed;
        static SIGNED_LONG_INTEGER Disarmed;
        static SIGNED_LONG_INTEGER Bypassed;
        static SIGNED_LONG_INTEGER AlarmTriggered;
        static SIGNED_LONG_INTEGER Short;
        static SIGNED_LONG_INTEGER Error;
        static SIGNED_LONG_INTEGER Missing;
        static SIGNED_LONG_INTEGER Normal;
        static SIGNED_LONG_INTEGER Off;
        static SIGNED_LONG_INTEGER Pulse;
        static SIGNED_LONG_INTEGER Steady;
        static SIGNED_LONG_INTEGER Temporal;
        static SIGNED_LONG_INTEGER Wink;
        static SIGNED_LONG_INTEGER PanicAlarm;
        static SIGNED_LONG_INTEGER PanicTest;
        static SIGNED_LONG_INTEGER Open;
        static SIGNED_LONG_INTEGER LowBattery;
        static SIGNED_LONG_INTEGER AllOn;
        static SIGNED_LONG_INTEGER AllOnInstantArm;
        static SIGNED_LONG_INTEGER AwayOn;
        static SIGNED_LONG_INTEGER AwayExitDelay;
        static SIGNED_LONG_INTEGER AwayEntryDelay;
        static SIGNED_LONG_INTEGER PartOnInstant;
        static SIGNED_LONG_INTEGER PartOnDelay;
        static SIGNED_LONG_INTEGER AllOnEntryDelay;
        static SIGNED_LONG_INTEGER AllOnExitDelay;
        static SIGNED_LONG_INTEGER PartOnEntryDelay;
        static SIGNED_LONG_INTEGER PartOnExitDelay;
        static SIGNED_LONG_INTEGER Stay1On;
        static SIGNED_LONG_INTEGER Stay2On;
        static SIGNED_LONG_INTEGER Trouble;
    };

    static class SecuritySystemAreaType // enum
    {
        static SIGNED_LONG_INTEGER CanArmDisarm;
        static SIGNED_LONG_INTEGER CanArmDisarmTempBlock;
        static SIGNED_LONG_INTEGER SingleDependantArea;
        static SIGNED_LONG_INTEGER MultiDependantArea;
        static SIGNED_LONG_INTEGER CanArmDisarmWithTimer;
        static SIGNED_LONG_INTEGER ControlledByTimer;
        static SIGNED_LONG_INTEGER BankVault;
    };

    static class SecuritySystemResourceType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Output;
        static SIGNED_LONG_INTEGER Area;
        static SIGNED_LONG_INTEGER Zone;
        static SIGNED_LONG_INTEGER Device;
        static SIGNED_LONG_INTEGER Door;
        static SIGNED_LONG_INTEGER Keypad;
        static SIGNED_LONG_INTEGER SecuritySystemRoot;
    };

    static class SecuritySystemSettableStates // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER ArmAway;
        static SIGNED_LONG_INTEGER ArmAwayInstant;
        static SIGNED_LONG_INTEGER ArmAwayDelayed;
        static SIGNED_LONG_INTEGER ArmInstant;
        static SIGNED_LONG_INTEGER ArmDelayed;
        static SIGNED_LONG_INTEGER ArmStay;
        static SIGNED_LONG_INTEGER ArmStay2;
        static SIGNED_LONG_INTEGER ArmStayInstant;
        static SIGNED_LONG_INTEGER ArmStayDelayed;
        static SIGNED_LONG_INTEGER Disarm;
        static SIGNED_LONG_INTEGER PerimeterInstantArm;
        static SIGNED_LONG_INTEGER PerimeterDelayArm;
        static SIGNED_LONG_INTEGER Active;
        static SIGNED_LONG_INTEGER Inactive;
        static SIGNED_LONG_INTEGER Custom;
        static SIGNED_LONG_INTEGER State1;
        static SIGNED_LONG_INTEGER State2;
        static SIGNED_LONG_INTEGER State3;
        static SIGNED_LONG_INTEGER State4;
        static SIGNED_LONG_INTEGER State5;
        static SIGNED_LONG_INTEGER State6;
        static SIGNED_LONG_INTEGER State7;
        static SIGNED_LONG_INTEGER State8;
        static SIGNED_LONG_INTEGER State9;
        static SIGNED_LONG_INTEGER State10;
    };

    static class SecuritySystemStateObjects // enum
    {
        static SIGNED_LONG_INTEGER KeypadStatusText;
        static SIGNED_LONG_INTEGER KeypadLeds;
        static SIGNED_LONG_INTEGER SecuritySystemStates;
        static SIGNED_LONG_INTEGER Features;
        static SIGNED_LONG_INTEGER Connection;
        static SIGNED_LONG_INTEGER AuxiliaryButtonLedState;
        static SIGNED_LONG_INTEGER Login;
        static SIGNED_LONG_INTEGER SoftwareVersion;
        static SIGNED_LONG_INTEGER SoftwareVersionDifferences;
        static SIGNED_LONG_INTEGER ResourceStatus;
        static SIGNED_LONG_INTEGER ResourceState;
        static SIGNED_LONG_INTEGER ResourceCustomFeature;
        static SIGNED_LONG_INTEGER SecuritySystemCustomFeature;
        static SIGNED_LONG_INTEGER SystemStatus;
        static SIGNED_LONG_INTEGER Log;
        static SIGNED_LONG_INTEGER Info;
        static SIGNED_LONG_INTEGER Heartbeat;
        static SIGNED_LONG_INTEGER DeviceSetup;
        static SIGNED_LONG_INTEGER SystemSetup;
        static SIGNED_LONG_INTEGER Message;
        static SIGNED_LONG_INTEGER SoftButton;
        static SIGNED_LONG_INTEGER SoftButtonFeedback;
        static SIGNED_LONG_INTEGER SoftLED;
        static SIGNED_LONG_INTEGER SoftLEDFeedback;
        static SIGNED_LONG_INTEGER ExitTime;
    };

    static class SecuritySystemStatus // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Alarm;
        static SIGNED_LONG_INTEGER ArmAway;
        static SIGNED_LONG_INTEGER ArmInstant;
        static SIGNED_LONG_INTEGER ArmStay;
        static SIGNED_LONG_INTEGER Fire;
        static SIGNED_LONG_INTEGER Disarmed;
        static SIGNED_LONG_INTEGER Tamper;
        static SIGNED_LONG_INTEGER EntryDelay;
        static SIGNED_LONG_INTEGER ExitDelay;
    };

    static class SelfViewMode // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
        static SIGNED_LONG_INTEGER Auto;
    };

    static class StandardCommandsEnum // enum
    {
        static SIGNED_LONG_INTEGER NotAStandardCommand;
        static SIGNED_LONG_INTEGER Vga1;
        static SIGNED_LONG_INTEGER Vga2;
        static SIGNED_LONG_INTEGER Vga3;
        static SIGNED_LONG_INTEGER Vga4;
        static SIGNED_LONG_INTEGER Vga5;
        static SIGNED_LONG_INTEGER Vga6;
        static SIGNED_LONG_INTEGER Vga7;
        static SIGNED_LONG_INTEGER Vga8;
        static SIGNED_LONG_INTEGER Vga9;
        static SIGNED_LONG_INTEGER Vga10;
        static SIGNED_LONG_INTEGER Hdmi1;
        static SIGNED_LONG_INTEGER Hdmi2;
        static SIGNED_LONG_INTEGER Hdmi3;
        static SIGNED_LONG_INTEGER Hdmi4;
        static SIGNED_LONG_INTEGER Hdmi5;
        static SIGNED_LONG_INTEGER Hdmi6;
        static SIGNED_LONG_INTEGER Hdmi7;
        static SIGNED_LONG_INTEGER Hdmi8;
        static SIGNED_LONG_INTEGER Hdmi9;
        static SIGNED_LONG_INTEGER Hdmi10;
        static SIGNED_LONG_INTEGER Dvi1;
        static SIGNED_LONG_INTEGER Dvi2;
        static SIGNED_LONG_INTEGER Dvi3;
        static SIGNED_LONG_INTEGER Dvi4;
        static SIGNED_LONG_INTEGER Dvi5;
        static SIGNED_LONG_INTEGER Dvi6;
        static SIGNED_LONG_INTEGER Dvi7;
        static SIGNED_LONG_INTEGER Dvi8;
        static SIGNED_LONG_INTEGER Dvi9;
        static SIGNED_LONG_INTEGER Dvi10;
        static SIGNED_LONG_INTEGER Component1;
        static SIGNED_LONG_INTEGER Component2;
        static SIGNED_LONG_INTEGER Component3;
        static SIGNED_LONG_INTEGER Component4;
        static SIGNED_LONG_INTEGER Component5;
        static SIGNED_LONG_INTEGER Component6;
        static SIGNED_LONG_INTEGER Component7;
        static SIGNED_LONG_INTEGER Component8;
        static SIGNED_LONG_INTEGER Component9;
        static SIGNED_LONG_INTEGER Component10;
        static SIGNED_LONG_INTEGER Composite1;
        static SIGNED_LONG_INTEGER Composite2;
        static SIGNED_LONG_INTEGER Composite3;
        static SIGNED_LONG_INTEGER Composite4;
        static SIGNED_LONG_INTEGER Composite5;
        static SIGNED_LONG_INTEGER Composite6;
        static SIGNED_LONG_INTEGER Composite7;
        static SIGNED_LONG_INTEGER Composite8;
        static SIGNED_LONG_INTEGER Composite9;
        static SIGNED_LONG_INTEGER Composite10;
        static SIGNED_LONG_INTEGER DisplayPort1;
        static SIGNED_LONG_INTEGER DisplayPort2;
        static SIGNED_LONG_INTEGER DisplayPort3;
        static SIGNED_LONG_INTEGER DisplayPort4;
        static SIGNED_LONG_INTEGER DisplayPort5;
        static SIGNED_LONG_INTEGER DisplayPort6;
        static SIGNED_LONG_INTEGER DisplayPort7;
        static SIGNED_LONG_INTEGER DisplayPort8;
        static SIGNED_LONG_INTEGER DisplayPort9;
        static SIGNED_LONG_INTEGER DisplayPort10;
        static SIGNED_LONG_INTEGER Usb1;
        static SIGNED_LONG_INTEGER Usb2;
        static SIGNED_LONG_INTEGER Usb3;
        static SIGNED_LONG_INTEGER Usb4;
        static SIGNED_LONG_INTEGER Usb5;
        static SIGNED_LONG_INTEGER Antenna1;
        static SIGNED_LONG_INTEGER Antenna2;
        static SIGNED_LONG_INTEGER Network1;
        static SIGNED_LONG_INTEGER Network2;
        static SIGNED_LONG_INTEGER Network3;
        static SIGNED_LONG_INTEGER Network4;
        static SIGNED_LONG_INTEGER Network5;
        static SIGNED_LONG_INTEGER Network6;
        static SIGNED_LONG_INTEGER Network7;
        static SIGNED_LONG_INTEGER Network8;
        static SIGNED_LONG_INTEGER Network9;
        static SIGNED_LONG_INTEGER Network10;
        static SIGNED_LONG_INTEGER Input1;
        static SIGNED_LONG_INTEGER Input2;
        static SIGNED_LONG_INTEGER Input3;
        static SIGNED_LONG_INTEGER Input4;
        static SIGNED_LONG_INTEGER Input5;
        static SIGNED_LONG_INTEGER Input6;
        static SIGNED_LONG_INTEGER Input7;
        static SIGNED_LONG_INTEGER Input8;
        static SIGNED_LONG_INTEGER Input9;
        static SIGNED_LONG_INTEGER Input10;
        static SIGNED_LONG_INTEGER Input11;
        static SIGNED_LONG_INTEGER Input12;
        static SIGNED_LONG_INTEGER Input13;
        static SIGNED_LONG_INTEGER Input14;
        static SIGNED_LONG_INTEGER Input15;
        static SIGNED_LONG_INTEGER Input16;
        static SIGNED_LONG_INTEGER Input17;
        static SIGNED_LONG_INTEGER Input18;
        static SIGNED_LONG_INTEGER Input19;
        static SIGNED_LONG_INTEGER Input20;
        static SIGNED_LONG_INTEGER Input21;
        static SIGNED_LONG_INTEGER Input22;
        static SIGNED_LONG_INTEGER Input23;
        static SIGNED_LONG_INTEGER Input24;
        static SIGNED_LONG_INTEGER Input25;
        static SIGNED_LONG_INTEGER Input26;
        static SIGNED_LONG_INTEGER Input27;
        static SIGNED_LONG_INTEGER Input28;
        static SIGNED_LONG_INTEGER Input29;
        static SIGNED_LONG_INTEGER Input30;
        static SIGNED_LONG_INTEGER Input31;
        static SIGNED_LONG_INTEGER Input32;
        static SIGNED_LONG_INTEGER Input33;
        static SIGNED_LONG_INTEGER Input34;
        static SIGNED_LONG_INTEGER Input35;
        static SIGNED_LONG_INTEGER Input36;
        static SIGNED_LONG_INTEGER Input37;
        static SIGNED_LONG_INTEGER Input38;
        static SIGNED_LONG_INTEGER Input39;
        static SIGNED_LONG_INTEGER Input40;
        static SIGNED_LONG_INTEGER Input41;
        static SIGNED_LONG_INTEGER Input42;
        static SIGNED_LONG_INTEGER Input43;
        static SIGNED_LONG_INTEGER Input44;
        static SIGNED_LONG_INTEGER Input45;
        static SIGNED_LONG_INTEGER Input46;
        static SIGNED_LONG_INTEGER Input47;
        static SIGNED_LONG_INTEGER Input48;
        static SIGNED_LONG_INTEGER Input49;
        static SIGNED_LONG_INTEGER Input50;
        static SIGNED_LONG_INTEGER InputPoll;
        static SIGNED_LONG_INTEGER AspectSideBar;
        static SIGNED_LONG_INTEGER AspectStrech;
        static SIGNED_LONG_INTEGER AspectNormal;
        static SIGNED_LONG_INTEGER AspectDotByDot;
        static SIGNED_LONG_INTEGER AspectFullScreen;
        static SIGNED_LONG_INTEGER AspectAuto;
        static SIGNED_LONG_INTEGER AspectOriginal;
        static SIGNED_LONG_INTEGER Aspect16By9;
        static SIGNED_LONG_INTEGER AspectWideZoom;
        static SIGNED_LONG_INTEGER Aspect4By3;
        static SIGNED_LONG_INTEGER AspectSubTitle;
        static SIGNED_LONG_INTEGER AspectJust;
        static SIGNED_LONG_INTEGER AspectZoom;
        static SIGNED_LONG_INTEGER AspectZoom2;
        static SIGNED_LONG_INTEGER AspectZoom3;
        static SIGNED_LONG_INTEGER AspectRatio1;
        static SIGNED_LONG_INTEGER AspectRatio2;
        static SIGNED_LONG_INTEGER AspectRatio3;
        static SIGNED_LONG_INTEGER AspectRatio4;
        static SIGNED_LONG_INTEGER AspectRatio5;
        static SIGNED_LONG_INTEGER AspectRatio6;
        static SIGNED_LONG_INTEGER AspectRatio7;
        static SIGNED_LONG_INTEGER AspectRatio8;
        static SIGNED_LONG_INTEGER AspectRatio9;
        static SIGNED_LONG_INTEGER AspectRatio10;
        static SIGNED_LONG_INTEGER AspectRatio11;
        static SIGNED_LONG_INTEGER AspectRatioPoll;
        static SIGNED_LONG_INTEGER AvAuto;
        static SIGNED_LONG_INTEGER AvGame;
        static SIGNED_LONG_INTEGER AvGame3D;
        static SIGNED_LONG_INTEGER AvDynamic;
        static SIGNED_LONG_INTEGER AvDynamicFixed;
        static SIGNED_LONG_INTEGER AvMovie;
        static SIGNED_LONG_INTEGER AvMovie3D;
        static SIGNED_LONG_INTEGER AvPc;
        static SIGNED_LONG_INTEGER AvPoll;
        static SIGNED_LONG_INTEGER AvUser;
        static SIGNED_LONG_INTEGER AvVintageMovie;
        static SIGNED_LONG_INTEGER AvStandard;
        static SIGNED_LONG_INTEGER AvStandard3D;
        static SIGNED_LONG_INTEGER AvXvColor;
        static SIGNED_LONG_INTEGER AllLampsOff;
        static SIGNED_LONG_INTEGER AllLampsOn;
        static SIGNED_LONG_INTEGER Antenna;
        static SIGNED_LONG_INTEGER Asterisk;
        static SIGNED_LONG_INTEGER Mute;
        static SIGNED_LONG_INTEGER MuteOff;
        static SIGNED_LONG_INTEGER MuteOn;
        static SIGNED_LONG_INTEGER MutePoll;
        static SIGNED_LONG_INTEGER Auto;
        static SIGNED_LONG_INTEGER Aux1;
        static SIGNED_LONG_INTEGER Aux2;
        static SIGNED_LONG_INTEGER DigitalChannel;
        static SIGNED_LONG_INTEGER AnalogChannel;
        static SIGNED_LONG_INTEGER Channel;
        static SIGNED_LONG_INTEGER ChannelUp;
        static SIGNED_LONG_INTEGER ChannelDown;
        static SIGNED_LONG_INTEGER ChannelPoll;
        static SIGNED_LONG_INTEGER Tune;
        static SIGNED_LONG_INTEGER Eject;
        static SIGNED_LONG_INTEGER OnScreenDisplay;
        static SIGNED_LONG_INTEGER OnScreenDisplayOff;
        static SIGNED_LONG_INTEGER OnScreenDisplayOn;
        static SIGNED_LONG_INTEGER OnScreenDisplayPoll;
        static SIGNED_LONG_INTEGER Power;
        static SIGNED_LONG_INTEGER PowerOff;
        static SIGNED_LONG_INTEGER PowerOn;
        static SIGNED_LONG_INTEGER PowerPoll;
        static SIGNED_LONG_INTEGER Vol;
        static SIGNED_LONG_INTEGER VolMinus;
        static SIGNED_LONG_INTEGER VolPlus;
        static SIGNED_LONG_INTEGER VolumePoll;
        static SIGNED_LONG_INTEGER _0;
        static SIGNED_LONG_INTEGER _1;
        static SIGNED_LONG_INTEGER _2;
        static SIGNED_LONG_INTEGER _3;
        static SIGNED_LONG_INTEGER _4;
        static SIGNED_LONG_INTEGER _5;
        static SIGNED_LONG_INTEGER _6;
        static SIGNED_LONG_INTEGER _7;
        static SIGNED_LONG_INTEGER _8;
        static SIGNED_LONG_INTEGER _9;
        static SIGNED_LONG_INTEGER Octothorpe;
        static SIGNED_LONG_INTEGER Nop;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER DownArrow;
        static SIGNED_LONG_INTEGER LeftArrow;
        static SIGNED_LONG_INTEGER RightArrow;
        static SIGNED_LONG_INTEGER UpArrow;
        static SIGNED_LONG_INTEGER Select;
        static SIGNED_LONG_INTEGER Enter;
        static SIGNED_LONG_INTEGER Home;
        static SIGNED_LONG_INTEGER Clear;
        static SIGNED_LONG_INTEGER Display;
        static SIGNED_LONG_INTEGER Exit;
        static SIGNED_LONG_INTEGER Blue;
        static SIGNED_LONG_INTEGER Green;
        static SIGNED_LONG_INTEGER Red;
        static SIGNED_LONG_INTEGER Yellow;
        static SIGNED_LONG_INTEGER Options;
        static SIGNED_LONG_INTEGER ForwardScan;
        static SIGNED_LONG_INTEGER ReverseScan;
        static SIGNED_LONG_INTEGER Pause;
        static SIGNED_LONG_INTEGER Play;
        static SIGNED_LONG_INTEGER PlayPause;
        static SIGNED_LONG_INTEGER Repeat;
        static SIGNED_LONG_INTEGER Return;
        static SIGNED_LONG_INTEGER Stop;
        static SIGNED_LONG_INTEGER Subtitle;
        static SIGNED_LONG_INTEGER TopMenu;
        static SIGNED_LONG_INTEGER ForwardSkip;
        static SIGNED_LONG_INTEGER ReverseSkip;
        static SIGNED_LONG_INTEGER PopUpMenu;
        static SIGNED_LONG_INTEGER Menu;
        static SIGNED_LONG_INTEGER Info;
        static SIGNED_LONG_INTEGER A;
        static SIGNED_LONG_INTEGER B;
        static SIGNED_LONG_INTEGER C;
        static SIGNED_LONG_INTEGER D;
        static SIGNED_LONG_INTEGER Back;
        static SIGNED_LONG_INTEGER Dvr;
        static SIGNED_LONG_INTEGER Favorite;
        static SIGNED_LONG_INTEGER Guide;
        static SIGNED_LONG_INTEGER Last;
        static SIGNED_LONG_INTEGER Live;
        static SIGNED_LONG_INTEGER PageDown;
        static SIGNED_LONG_INTEGER PageUp;
        static SIGNED_LONG_INTEGER Record;
        static SIGNED_LONG_INTEGER Replay;
        static SIGNED_LONG_INTEGER SpeedSlow;
        static SIGNED_LONG_INTEGER LampHoursPoll;
        static SIGNED_LONG_INTEGER KeypadBackSpace;
        static SIGNED_LONG_INTEGER PlayBackStatusPoll;
        static SIGNED_LONG_INTEGER TrackPoll;
        static SIGNED_LONG_INTEGER ChapterPoll;
        static SIGNED_LONG_INTEGER TrackElapsedTimePoll;
        static SIGNED_LONG_INTEGER ChapterElapsedTimePoll;
        static SIGNED_LONG_INTEGER TotalElapsedTimePoll;
        static SIGNED_LONG_INTEGER TrackRemainingTimePoll;
        static SIGNED_LONG_INTEGER ChapterRemainingTimePoll;
        static SIGNED_LONG_INTEGER TotalRemainingTimePoll;
        static SIGNED_LONG_INTEGER ThumbsUp;
        static SIGNED_LONG_INTEGER ThumbsDown;
        static SIGNED_LONG_INTEGER Dash;
        static SIGNED_LONG_INTEGER Period;
        static SIGNED_LONG_INTEGER EnergyStar;
        static SIGNED_LONG_INTEGER EnergyStarOn;
        static SIGNED_LONG_INTEGER EnergyStarOff;
        static SIGNED_LONG_INTEGER EnergyStarPoll;
        static SIGNED_LONG_INTEGER VideoMute;
        static SIGNED_LONG_INTEGER VideoMuteOn;
        static SIGNED_LONG_INTEGER VideoMuteOff;
        static SIGNED_LONG_INTEGER VideoMutePoll;
        static SIGNED_LONG_INTEGER CustomCommand;
        static SIGNED_LONG_INTEGER FunctionButton1;
        static SIGNED_LONG_INTEGER FunctionButton2;
        static SIGNED_LONG_INTEGER FunctionButton3;
        static SIGNED_LONG_INTEGER FunctionButton4;
        static SIGNED_LONG_INTEGER FunctionButton5;
        static SIGNED_LONG_INTEGER FunctionButton6;
        static SIGNED_LONG_INTEGER FunctionButton7;
        static SIGNED_LONG_INTEGER FunctionButton8;
        static SIGNED_LONG_INTEGER SetSystemStateToArmAway;
        static SIGNED_LONG_INTEGER SetSystemStateToArmInstant;
        static SIGNED_LONG_INTEGER SetSystemStateToArmStay;
        static SIGNED_LONG_INTEGER SetSystemStateToDisarmed;
        static SIGNED_LONG_INTEGER MicMute;
        static SIGNED_LONG_INTEGER MicMuteOn;
        static SIGNED_LONG_INTEGER MicMuteOff;
        static SIGNED_LONG_INTEGER MicMutePoll;
        static SIGNED_LONG_INTEGER DialMeeting;
        static SIGNED_LONG_INTEGER DialAddressBook;
        static SIGNED_LONG_INTEGER DialManual;
        static SIGNED_LONG_INTEGER SelfView;
        static SIGNED_LONG_INTEGER SelfViewOn;
        static SIGNED_LONG_INTEGER SelfViewOff;
        static SIGNED_LONG_INTEGER SelfViewAuto;
        static SIGNED_LONG_INTEGER SelfViewPoll;
        static SIGNED_LONG_INTEGER SelfViewPipLocation;
        static SIGNED_LONG_INTEGER SelfViewMonitor;
        static SIGNED_LONG_INTEGER SelfViewFullScreenOn;
        static SIGNED_LONG_INTEGER SelfViewFullScreenOff;
        static SIGNED_LONG_INTEGER PictureMode;
        static SIGNED_LONG_INTEGER PresentationStart;
        static SIGNED_LONG_INTEGER PresentationStop;
        static SIGNED_LONG_INTEGER PipLocation;
        static SIGNED_LONG_INTEGER PipLocationPoll;
        static SIGNED_LONG_INTEGER MainVideoSource;
        static SIGNED_LONG_INTEGER MainVideoSourcePoll;
        static SIGNED_LONG_INTEGER CameraFarEndPanLeft;
        static SIGNED_LONG_INTEGER CameraFarEndPanRight;
        static SIGNED_LONG_INTEGER CameraFarEndTiltUp;
        static SIGNED_LONG_INTEGER CameraFarEndTiltDown;
        static SIGNED_LONG_INTEGER CameraFarEndZoomIn;
        static SIGNED_LONG_INTEGER CameraFarEndZoomOut;
        static SIGNED_LONG_INTEGER CameraFarEndFocusNear;
        static SIGNED_LONG_INTEGER CameraFarEndFocusFar;
        static SIGNED_LONG_INTEGER CameraFarEndStop;
        static SIGNED_LONG_INTEGER CameraFarEndStopPan;
        static SIGNED_LONG_INTEGER CameraFarEndStopTilt;
        static SIGNED_LONG_INTEGER CameraFarEndStopZoom;
        static SIGNED_LONG_INTEGER CameraFarEndStopFocus;
        static SIGNED_LONG_INTEGER CameraFarEndAutoFocus;
        static SIGNED_LONG_INTEGER CameraFarEndStorePreset;
        static SIGNED_LONG_INTEGER CameraFarEndRecallPreset;
        static SIGNED_LONG_INTEGER CameraNearEndPanLeft;
        static SIGNED_LONG_INTEGER CameraNearEndPanRight;
        static SIGNED_LONG_INTEGER CameraNearEndTiltUp;
        static SIGNED_LONG_INTEGER CameraNearEndTiltDown;
        static SIGNED_LONG_INTEGER CameraNearEndZoomIn;
        static SIGNED_LONG_INTEGER CameraNearEndZoomOut;
        static SIGNED_LONG_INTEGER CameraNearEndFocusNear;
        static SIGNED_LONG_INTEGER CameraNearEndFocusFar;
        static SIGNED_LONG_INTEGER CameraNearEndStop;
        static SIGNED_LONG_INTEGER CameraNearEndStopPan;
        static SIGNED_LONG_INTEGER CameraNearEndStopTilt;
        static SIGNED_LONG_INTEGER CameraNearEndStopZoom;
        static SIGNED_LONG_INTEGER CameraNearEndStopFocus;
        static SIGNED_LONG_INTEGER CameraNearEndAutoFocus;
        static SIGNED_LONG_INTEGER CameraNearEndResetPosition;
        static SIGNED_LONG_INTEGER CameraNearEndRecallPreset;
        static SIGNED_LONG_INTEGER CameraNearEndStorePreset;
        static SIGNED_LONG_INTEGER CameraTrackingOn;
        static SIGNED_LONG_INTEGER CameraTrackingOff;
        static SIGNED_LONG_INTEGER CameraRecallTrackingPreset;
        static SIGNED_LONG_INTEGER CameraStoreTrackingPreset;
        static SIGNED_LONG_INTEGER Answer;
        static SIGNED_LONG_INTEGER Dtmf;
        static SIGNED_LONG_INTEGER HangUp;
        static SIGNED_LONG_INTEGER Hold;
        static SIGNED_LONG_INTEGER Join;
        static SIGNED_LONG_INTEGER Reject;
        static SIGNED_LONG_INTEGER Resume;
        static SIGNED_LONG_INTEGER Transfer;
        static SIGNED_LONG_INTEGER AllowFecc;
        static SIGNED_LONG_INTEGER DoNotAllowFecc;
        static SIGNED_LONG_INTEGER MuteMicsAutoAnswerOn;
        static SIGNED_LONG_INTEGER MuteMicsAutoAnswerOff;
        static SIGNED_LONG_INTEGER DoNotDisturbOn;
        static SIGNED_LONG_INTEGER DoNotDisturbOff;
        static SIGNED_LONG_INTEGER AutoAnswerOn;
        static SIGNED_LONG_INTEGER AutoAnswerOff;
        static SIGNED_LONG_INTEGER StandbyOn;
        static SIGNED_LONG_INTEGER StandbyOff;
        static SIGNED_LONG_INTEGER EncryptionOn;
        static SIGNED_LONG_INTEGER EncryptionOff;
        static SIGNED_LONG_INTEGER Reboot;
        static SIGNED_LONG_INTEGER MessageResponse;
        static SIGNED_LONG_INTEGER MessageClear;
        static SIGNED_LONG_INTEGER AlertClear;
        static SIGNED_LONG_INTEGER Input4Dvi;
        static SIGNED_LONG_INTEGER Input4SVideoComposite;
        static SIGNED_LONG_INTEGER FarEndPresentationSource;
        static SIGNED_LONG_INTEGER MultipointAutoAnswerOn;
        static SIGNED_LONG_INTEGER MultipointAutoAnswerOff;
        static SIGNED_LONG_INTEGER MultipointAutoAnswerDoNotDisturb;
        static SIGNED_LONG_INTEGER MultipointModeAuto;
        static SIGNED_LONG_INTEGER MultipointModePresentation;
        static SIGNED_LONG_INTEGER MultipointModeDiscussion;
        static SIGNED_LONG_INTEGER MultipointModeFullScreen;
        static SIGNED_LONG_INTEGER Monitor1PresentationFar;
        static SIGNED_LONG_INTEGER Monitor1PresentationNearOrFar;
        static SIGNED_LONG_INTEGER Monitor1PresentationContentOrFar;
        static SIGNED_LONG_INTEGER Monitor1PresentationAll;
        static SIGNED_LONG_INTEGER Monitor2PresentationNear;
        static SIGNED_LONG_INTEGER Monitor2PresentationFar;
        static SIGNED_LONG_INTEGER Monitor2PresentationContent;
        static SIGNED_LONG_INTEGER Monitor2PresentationNearOrFar;
        static SIGNED_LONG_INTEGER Monitor2PresentationContentOrNear;
        static SIGNED_LONG_INTEGER Monitor2PresentationContentOrFar;
        static SIGNED_LONG_INTEGER Monitor2PresentationAll;
        static SIGNED_LONG_INTEGER Monitor3PresentationNear;
        static SIGNED_LONG_INTEGER Monitor3PresentationFar;
        static SIGNED_LONG_INTEGER Monitor3PresentationContent;
        static SIGNED_LONG_INTEGER Monitor3PresentationRecordNearOrFar;
        static SIGNED_LONG_INTEGER Monitor3PresentationRecordAll;
        static SIGNED_LONG_INTEGER IrRemoteEmulationKeyPress;
        static SIGNED_LONG_INTEGER IrRemoteEmulationKeyRelease;
        static SIGNED_LONG_INTEGER IrRemoteEmulationKeyClick;
        static SIGNED_LONG_INTEGER PhoneBookRequest;
        static SIGNED_LONG_INTEGER RecentCallsRequest;
        static SIGNED_LONG_INTEGER TunerFrequencyDown;
        static SIGNED_LONG_INTEGER TunerFrequencyUp;
        static SIGNED_LONG_INTEGER TunerFrequency;
        static SIGNED_LONG_INTEGER TunerAutoFrequencyDown;
        static SIGNED_LONG_INTEGER TunerAutoFrequencyUp;
        static SIGNED_LONG_INTEGER TunerFrequencyBand;
        static SIGNED_LONG_INTEGER TunerFrequencyBandAm;
        static SIGNED_LONG_INTEGER TunerFrequencyBandFm;
        static SIGNED_LONG_INTEGER TunerPresetRecall;
        static SIGNED_LONG_INTEGER TunerPresetStore;
        static SIGNED_LONG_INTEGER TunerFrequencyPoll;
        static SIGNED_LONG_INTEGER TunerPresetUp;
        static SIGNED_LONG_INTEGER TunerPresetDown;
        static SIGNED_LONG_INTEGER ToneControlOn;
        static SIGNED_LONG_INTEGER ToneControlOff;
        static SIGNED_LONG_INTEGER ToneSetBass;
        static SIGNED_LONG_INTEGER ToneBassLevelUp;
        static SIGNED_LONG_INTEGER ToneBassLevelDown;
        static SIGNED_LONG_INTEGER ToneSetTreble;
        static SIGNED_LONG_INTEGER ToneTrebleLevelUp;
        static SIGNED_LONG_INTEGER ToneTrebleLevelDown;
        static SIGNED_LONG_INTEGER LoudnessOn;
        static SIGNED_LONG_INTEGER LoudnessOff;
        static SIGNED_LONG_INTEGER LoudnessToggle;
        static SIGNED_LONG_INTEGER ToneStatePoll;
        static SIGNED_LONG_INTEGER ToneBassPoll;
        static SIGNED_LONG_INTEGER ToneTreblePoll;
        static SIGNED_LONG_INTEGER LoudnessPoll;
        static SIGNED_LONG_INTEGER ToneControlToggle;
        static SIGNED_LONG_INTEGER ToneBassReset;
        static SIGNED_LONG_INTEGER ToneTrebleReset;
        static SIGNED_LONG_INTEGER SurroundModeChange;
        static SIGNED_LONG_INTEGER SurroundModeCycle;
        static SIGNED_LONG_INTEGER SurroundModePoll;
        static SIGNED_LONG_INTEGER SurroundModeAuto;
        static SIGNED_LONG_INTEGER SurroundModeDirect;
        static SIGNED_LONG_INTEGER SurroundModeDolbyDigital;
        static SIGNED_LONG_INTEGER SurroundModeDtsSurround;
        static SIGNED_LONG_INTEGER SurroundModeGame;
        static SIGNED_LONG_INTEGER SurroundModeMovie;
        static SIGNED_LONG_INTEGER SurroundModeMusic;
        static SIGNED_LONG_INTEGER SurroundModePureDirect;
        static SIGNED_LONG_INTEGER SurroundModeStereo;
        static SIGNED_LONG_INTEGER InternetRadio;
        static SIGNED_LONG_INTEGER Sirius;
        static SIGNED_LONG_INTEGER Xm;
        static SIGNED_LONG_INTEGER SiriusXm;
        static SIGNED_LONG_INTEGER Pandora;
        static SIGNED_LONG_INTEGER LastFm;
        static SIGNED_LONG_INTEGER Rhapsody;
        static SIGNED_LONG_INTEGER HdRadio;
        static SIGNED_LONG_INTEGER Speaker1;
        static SIGNED_LONG_INTEGER Speaker2;
        static SIGNED_LONG_INTEGER Speaker3;
        static SIGNED_LONG_INTEGER Speaker4;
        static SIGNED_LONG_INTEGER Speaker5;
        static SIGNED_LONG_INTEGER Speaker6;
        static SIGNED_LONG_INTEGER Speaker7;
        static SIGNED_LONG_INTEGER Speaker8;
        static SIGNED_LONG_INTEGER Speaker9;
        static SIGNED_LONG_INTEGER Speaker10;
        static SIGNED_LONG_INTEGER Speaker11;
        static SIGNED_LONG_INTEGER Speaker12;
        static SIGNED_LONG_INTEGER Speaker13;
        static SIGNED_LONG_INTEGER Speaker14;
        static SIGNED_LONG_INTEGER Speaker15;
        static SIGNED_LONG_INTEGER Search;
        static SIGNED_LONG_INTEGER Optical1;
        static SIGNED_LONG_INTEGER Optical2;
        static SIGNED_LONG_INTEGER Optical3;
        static SIGNED_LONG_INTEGER Optical4;
        static SIGNED_LONG_INTEGER Optical5;
        static SIGNED_LONG_INTEGER Optical6;
        static SIGNED_LONG_INTEGER Optical7;
        static SIGNED_LONG_INTEGER Optical8;
        static SIGNED_LONG_INTEGER Optical9;
        static SIGNED_LONG_INTEGER Optical10;
        static SIGNED_LONG_INTEGER Coax1;
        static SIGNED_LONG_INTEGER Coax2;
        static SIGNED_LONG_INTEGER Coax3;
        static SIGNED_LONG_INTEGER Coax4;
        static SIGNED_LONG_INTEGER Coax5;
        static SIGNED_LONG_INTEGER Coax6;
        static SIGNED_LONG_INTEGER Coax7;
        static SIGNED_LONG_INTEGER Coax8;
        static SIGNED_LONG_INTEGER Coax9;
        static SIGNED_LONG_INTEGER Coax10;
        static SIGNED_LONG_INTEGER AnalogAudio1;
        static SIGNED_LONG_INTEGER AnalogAudio2;
        static SIGNED_LONG_INTEGER AnalogAudio3;
        static SIGNED_LONG_INTEGER AnalogAudio4;
        static SIGNED_LONG_INTEGER AnalogAudio5;
        static SIGNED_LONG_INTEGER AnalogAudio6;
        static SIGNED_LONG_INTEGER AnalogAudio7;
        static SIGNED_LONG_INTEGER AnalogAudio8;
        static SIGNED_LONG_INTEGER AnalogAudio9;
        static SIGNED_LONG_INTEGER AnalogAudio10;
        static SIGNED_LONG_INTEGER DVD;
        static SIGNED_LONG_INTEGER SAT;
        static SIGNED_LONG_INTEGER TV;
        static SIGNED_LONG_INTEGER CD;
        static SIGNED_LONG_INTEGER Tuner;
        static SIGNED_LONG_INTEGER Phono;
        static SIGNED_LONG_INTEGER DSS;
        static SIGNED_LONG_INTEGER AudioInputPoll;
        static SIGNED_LONG_INTEGER Spotify;
        static SIGNED_LONG_INTEGER YouTube;
        static SIGNED_LONG_INTEGER YouTubeTv;
        static SIGNED_LONG_INTEGER Netflix;
        static SIGNED_LONG_INTEGER Hulu;
        static SIGNED_LONG_INTEGER DirecTvNow;
        static SIGNED_LONG_INTEGER AmazonVideo;
        static SIGNED_LONG_INTEGER PlayStationVue;
        static SIGNED_LONG_INTEGER SlingTv;
        static SIGNED_LONG_INTEGER AirPlay;
        static SIGNED_LONG_INTEGER GoogleCast;
        static SIGNED_LONG_INTEGER Dlna;
        static SIGNED_LONG_INTEGER Tidal;
        static SIGNED_LONG_INTEGER Deezer;
        static SIGNED_LONG_INTEGER Crackle;
        static SIGNED_LONG_INTEGER OnDemand;
        static SIGNED_LONG_INTEGER GooglePlay;
        static SIGNED_LONG_INTEGER Bluetooth;
        static SIGNED_LONG_INTEGER Tivo;
        static SIGNED_LONG_INTEGER RSkip;
        static SIGNED_LONG_INTEGER FSkip;
        static SIGNED_LONG_INTEGER Bd1;
        static SIGNED_LONG_INTEGER Catv1;
        static SIGNED_LONG_INTEGER Game1;
        static SIGNED_LONG_INTEGER Pc1;
        static SIGNED_LONG_INTEGER Bluetooth1;
        static SIGNED_LONG_INTEGER MediaPlayer1;
        static SIGNED_LONG_INTEGER Ipod1;
        static SIGNED_LONG_INTEGER RequestSoftwareVersion;
        static SIGNED_LONG_INTEGER RequestSoftwareVersionDifferences;
        static SIGNED_LONG_INTEGER RequestEventLog;
        static SIGNED_LONG_INTEGER RequestAreasNotReadyToArm;
        static SIGNED_LONG_INTEGER Login;
        static SIGNED_LONG_INTEGER UDLLogin;
        static SIGNED_LONG_INTEGER Arm;
        static SIGNED_LONG_INTEGER ArmAway;
        static SIGNED_LONG_INTEGER ArmAwayInstant;
        static SIGNED_LONG_INTEGER ArmStay;
        static SIGNED_LONG_INTEGER ArmStayInstant;
        static SIGNED_LONG_INTEGER ArmForce;
        static SIGNED_LONG_INTEGER ArmForceInstant;
        static SIGNED_LONG_INTEGER Disarm;
        static SIGNED_LONG_INTEGER ArmResource;
        static SIGNED_LONG_INTEGER DisarmResource;
        static SIGNED_LONG_INTEGER RequestResourceStatus;
        static SIGNED_LONG_INTEGER BypassZones;
        static SIGNED_LONG_INTEGER UnbypassZones;
        static SIGNED_LONG_INTEGER RequestAreaName;
        static SIGNED_LONG_INTEGER RequestZoneName;
        static SIGNED_LONG_INTEGER Heartbeat;
        static SIGNED_LONG_INTEGER RequestSystemStatus;
        static SIGNED_LONG_INTEGER RequestSystemFeatureStatus;
        static SIGNED_LONG_INTEGER RequestSystemSetup;
        static SIGNED_LONG_INTEGER RequestAreaInformation;
        static SIGNED_LONG_INTEGER RequestZoneInformation;
        static SIGNED_LONG_INTEGER RequestDeviceInformation;
        static SIGNED_LONG_INTEGER RequestAreaResourceStatus;
        static SIGNED_LONG_INTEGER RequestZoneResourceStatus;
        static SIGNED_LONG_INTEGER RequestAreasInExitDelay;
        static SIGNED_LONG_INTEGER RequestAreasInEntryDelay;
        static SIGNED_LONG_INTEGER RequestBypassedZones;
        static SIGNED_LONG_INTEGER SilenceBells;
        static SIGNED_LONG_INTEGER ResetSensors;
        static SIGNED_LONG_INTEGER SubscribeResourceOnOffState;
        static SIGNED_LONG_INTEGER SubscribeResourceReadyState;
        static SIGNED_LONG_INTEGER SubscribeResourceGeneralState;
        static SIGNED_LONG_INTEGER SubscribeDeviceMessages;
        static SIGNED_LONG_INTEGER SubscribeDeviceLogging;
        static SIGNED_LONG_INTEGER SubscribeDeviceConfigurationChange;
        static SIGNED_LONG_INTEGER Subscribe;
        static SIGNED_LONG_INTEGER RequestAlarm;
        static SIGNED_LONG_INTEGER ArmAll;
        static SIGNED_LONG_INTEGER DisarmAll;
        static SIGNED_LONG_INTEGER BypassAll;
        static SIGNED_LONG_INTEGER UnbypassAll;
        static SIGNED_LONG_INTEGER KeypadAsterisk;
        static SIGNED_LONG_INTEGER KeypadDash;
        static SIGNED_LONG_INTEGER KeypadEnter;
        static SIGNED_LONG_INTEGER KeypadNumber;
        static SIGNED_LONG_INTEGER KeypadPeriod;
        static SIGNED_LONG_INTEGER KeypadPound;
        static SIGNED_LONG_INTEGER KeypadSendString;
        static SIGNED_LONG_INTEGER KeypadAux;
        static SIGNED_LONG_INTEGER RequestUsers;
        static SIGNED_LONG_INTEGER RequestAreaAlarm;
        static SIGNED_LONG_INTEGER RequestZoneAlarm;
        static SIGNED_LONG_INTEGER RequestTamper;
        static SIGNED_LONG_INTEGER RequestAlarmMemory;
        static SIGNED_LONG_INTEGER RequestAreaAlarmMemory;
        static SIGNED_LONG_INTEGER RequestZoneAlarmMemory;
        static SIGNED_LONG_INTEGER RequestFireAlarm;
        static SIGNED_LONG_INTEGER RequestFireAlarmMemory;
        static SIGNED_LONG_INTEGER RequestAreaExitTime;
        static SIGNED_LONG_INTEGER ForceArmAway;
        static SIGNED_LONG_INTEGER ForceArmStay;
        static SIGNED_LONG_INTEGER AudioVideoSwitcherRoute;
        static SIGNED_LONG_INTEGER AudioVideoSwitcherRoutePoll;
        static SIGNED_LONG_INTEGER AudioVideoExtenderRoute;
        static SIGNED_LONG_INTEGER AudioVideoExtenderRoutePoll;
        static SIGNED_LONG_INTEGER SpeakerProtectOn;
        static SIGNED_LONG_INTEGER SpeakerProtectOff;
        static SIGNED_LONG_INTEGER SpeakerProtectToggle;
        static SIGNED_LONG_INTEGER SpeakerProtectPoll;
        static SIGNED_LONG_INTEGER TemperaturePoll;
        static SIGNED_LONG_INTEGER TemperatureUnitPoll;
        static SIGNED_LONG_INTEGER DcFaultStatePoll;
        static SIGNED_LONG_INTEGER ClippingAudioPoll;
        static SIGNED_LONG_INTEGER SetRelayStateOn;
        static SIGNED_LONG_INTEGER SetRelayStateOff;
        static SIGNED_LONG_INTEGER RelayStatePoll;
        static SIGNED_LONG_INTEGER SetGenerIoDigitalOutputOn;
        static SIGNED_LONG_INTEGER SetGenerIoDigitalOutputOff;
        static SIGNED_LONG_INTEGER GenericIoAnalogInputPoll;
        static SIGNED_LONG_INTEGER GenericIoDigitalInputPoll;
        static SIGNED_LONG_INTEGER SendComData;
        static SIGNED_LONG_INTEGER SendCecData;
    };

     class StandardFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class PowerStatesFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class MuteStatesFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class MicMuteStatesFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class StandbyStatesFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class SelfviewStatesFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
        static SIGNED_LONG_INTEGER Auto;
    };

    static class TunerFrequencyBandStatesFeedback // enum
    {
        static SIGNED_LONG_INTEGER Am;
        static SIGNED_LONG_INTEGER Fm;
    };

    static class ResourceStatusFeedback // enum
    {
        static SIGNED_LONG_INTEGER Name;
        static SIGNED_LONG_INTEGER Unassigned;
        static SIGNED_LONG_INTEGER ArmedStay;
        static SIGNED_LONG_INTEGER ArmedAway;
        static SIGNED_LONG_INTEGER Disarmed;
        static SIGNED_LONG_INTEGER Bypassed;
        static SIGNED_LONG_INTEGER Unbypassed;
        static SIGNED_LONG_INTEGER Short;
        static SIGNED_LONG_INTEGER Missing;
        static SIGNED_LONG_INTEGER Error;
    };

    static class CompatibleFeedback // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Yes;
        static SIGNED_LONG_INTEGER No;
    };

    static class AuthorizationFeedback // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Authorized;
        static SIGNED_LONG_INTEGER Unauthorized;
    };

    static class InputTypesFeeback // enum
    {
        static SIGNED_LONG_INTEGER Vga1;
        static SIGNED_LONG_INTEGER Vga2;
        static SIGNED_LONG_INTEGER Vga3;
        static SIGNED_LONG_INTEGER Vga4;
        static SIGNED_LONG_INTEGER Vga5;
        static SIGNED_LONG_INTEGER Vga6;
        static SIGNED_LONG_INTEGER Vga7;
        static SIGNED_LONG_INTEGER Vga8;
        static SIGNED_LONG_INTEGER Vga9;
        static SIGNED_LONG_INTEGER Vga10;
        static SIGNED_LONG_INTEGER Hdmi1;
        static SIGNED_LONG_INTEGER Hdmi2;
        static SIGNED_LONG_INTEGER Hdmi3;
        static SIGNED_LONG_INTEGER Hdmi4;
        static SIGNED_LONG_INTEGER Hdmi5;
        static SIGNED_LONG_INTEGER Hdmi6;
        static SIGNED_LONG_INTEGER Hdmi7;
        static SIGNED_LONG_INTEGER Hdmi8;
        static SIGNED_LONG_INTEGER Hdmi9;
        static SIGNED_LONG_INTEGER Hdmi10;
        static SIGNED_LONG_INTEGER Dvi1;
        static SIGNED_LONG_INTEGER Dvi2;
        static SIGNED_LONG_INTEGER Dvi3;
        static SIGNED_LONG_INTEGER Dvi4;
        static SIGNED_LONG_INTEGER Dvi5;
        static SIGNED_LONG_INTEGER Dvi6;
        static SIGNED_LONG_INTEGER Dvi7;
        static SIGNED_LONG_INTEGER Dvi8;
        static SIGNED_LONG_INTEGER Dvi9;
        static SIGNED_LONG_INTEGER Dvi10;
        static SIGNED_LONG_INTEGER Component1;
        static SIGNED_LONG_INTEGER Component2;
        static SIGNED_LONG_INTEGER Component3;
        static SIGNED_LONG_INTEGER Component4;
        static SIGNED_LONG_INTEGER Component5;
        static SIGNED_LONG_INTEGER Component6;
        static SIGNED_LONG_INTEGER Component7;
        static SIGNED_LONG_INTEGER Component8;
        static SIGNED_LONG_INTEGER Component9;
        static SIGNED_LONG_INTEGER Component10;
        static SIGNED_LONG_INTEGER Composite1;
        static SIGNED_LONG_INTEGER Composite2;
        static SIGNED_LONG_INTEGER Composite3;
        static SIGNED_LONG_INTEGER Composite4;
        static SIGNED_LONG_INTEGER Composite5;
        static SIGNED_LONG_INTEGER Composite6;
        static SIGNED_LONG_INTEGER Composite7;
        static SIGNED_LONG_INTEGER Composite8;
        static SIGNED_LONG_INTEGER Composite9;
        static SIGNED_LONG_INTEGER Composite10;
        static SIGNED_LONG_INTEGER DisplayPort1;
        static SIGNED_LONG_INTEGER DisplayPort2;
        static SIGNED_LONG_INTEGER DisplayPort3;
        static SIGNED_LONG_INTEGER DisplayPort4;
        static SIGNED_LONG_INTEGER DisplayPort5;
        static SIGNED_LONG_INTEGER DisplayPort6;
        static SIGNED_LONG_INTEGER DisplayPort7;
        static SIGNED_LONG_INTEGER DisplayPort8;
        static SIGNED_LONG_INTEGER DisplayPort9;
        static SIGNED_LONG_INTEGER DisplayPort10;
        static SIGNED_LONG_INTEGER Usb1;
        static SIGNED_LONG_INTEGER Usb2;
        static SIGNED_LONG_INTEGER Usb3;
        static SIGNED_LONG_INTEGER Usb4;
        static SIGNED_LONG_INTEGER Usb5;
        static SIGNED_LONG_INTEGER Antenna1;
        static SIGNED_LONG_INTEGER Antenna2;
        static SIGNED_LONG_INTEGER Network1;
        static SIGNED_LONG_INTEGER Network2;
        static SIGNED_LONG_INTEGER Network3;
        static SIGNED_LONG_INTEGER Network4;
        static SIGNED_LONG_INTEGER Network5;
        static SIGNED_LONG_INTEGER Network6;
        static SIGNED_LONG_INTEGER Network7;
        static SIGNED_LONG_INTEGER Network8;
        static SIGNED_LONG_INTEGER Network9;
        static SIGNED_LONG_INTEGER Network10;
        static SIGNED_LONG_INTEGER Input1;
        static SIGNED_LONG_INTEGER Input2;
        static SIGNED_LONG_INTEGER Input3;
        static SIGNED_LONG_INTEGER Input4;
        static SIGNED_LONG_INTEGER Input5;
        static SIGNED_LONG_INTEGER Input6;
        static SIGNED_LONG_INTEGER Input7;
        static SIGNED_LONG_INTEGER Input8;
        static SIGNED_LONG_INTEGER Input9;
        static SIGNED_LONG_INTEGER Input10;
        static SIGNED_LONG_INTEGER Aux1;
        static SIGNED_LONG_INTEGER Aux2;
        static SIGNED_LONG_INTEGER MediaInternetRadio;
        static SIGNED_LONG_INTEGER MediaSiriusRadio0;
        static SIGNED_LONG_INTEGER MediaXmRadio;
        static SIGNED_LONG_INTEGER MediaSiriusXmRadio;
        static SIGNED_LONG_INTEGER MediaPandoraRadio;
        static SIGNED_LONG_INTEGER MediaLastFmRadio;
        static SIGNED_LONG_INTEGER MediaRhapsodyRadio;
        static SIGNED_LONG_INTEGER MediaHdRadio;
        static SIGNED_LONG_INTEGER Dvd1;
        static SIGNED_LONG_INTEGER Sat1;
        static SIGNED_LONG_INTEGER Tv;
        static SIGNED_LONG_INTEGER Cd;
        static SIGNED_LONG_INTEGER Tuner;
        static SIGNED_LONG_INTEGER Phono;
        static SIGNED_LONG_INTEGER Dss1;
    };

    static class CallDirectionFeedback // enum
    {
        static SIGNED_LONG_INTEGER Incoming;
        static SIGNED_LONG_INTEGER Outgoing;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class CallStateFeedback // enum
    {
        static SIGNED_LONG_INTEGER Dialing;
        static SIGNED_LONG_INTEGER Ringing;
        static SIGNED_LONG_INTEGER Connecting;
        static SIGNED_LONG_INTEGER Connected;
        static SIGNED_LONG_INTEGER Disconnecting;
        static SIGNED_LONG_INTEGER OnHold;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class CallProtocolFeedback // enum
    {
        static SIGNED_LONG_INTEGER H320;
        static SIGNED_LONG_INTEGER H323;
        static SIGNED_LONG_INTEGER SIP;
        static SIGNED_LONG_INTEGER Spark;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class CallTypeFeedback // enum
    {
        static SIGNED_LONG_INTEGER Video;
        static SIGNED_LONG_INTEGER Audio;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class AllowFarEndControlOfNearEndCameraFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class MuteMicsOnAutoAnswerFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class AutoAnswerFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class DoNotDisturbFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class EncryptionFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class EnergyStarFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class VideoMuteStatesFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class OnScreenDisplayFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

    static class StateSeverity // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Alarm;
        static SIGNED_LONG_INTEGER Error;
        static SIGNED_LONG_INTEGER Warning;
        static SIGNED_LONG_INTEGER Notice;
    };

    static class StateType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Inactive;
        static SIGNED_LONG_INTEGER Active;
    };

    static class eStringEncoding // enum
    {
        static SIGNED_LONG_INTEGER eEncodingUnknown;
        static SIGNED_LONG_INTEGER eEncodingASCII;
        static SIGNED_LONG_INTEGER eEncodingUTF16;
    };

    static class SurroundModeType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Movie;
        static SIGNED_LONG_INTEGER Music;
        static SIGNED_LONG_INTEGER Game;
        static SIGNED_LONG_INTEGER Direct;
        static SIGNED_LONG_INTEGER PureDirect;
        static SIGNED_LONG_INTEGER Stereo;
        static SIGNED_LONG_INTEGER Auto;
        static SIGNED_LONG_INTEGER DolbyDigital;
        static SIGNED_LONG_INTEGER DtsSurround;
        static SIGNED_LONG_INTEGER Thx;
    };

    static class ToneControlType // enum
    {
        static SIGNED_LONG_INTEGER Bass;
        static SIGNED_LONG_INTEGER Treble;
    };

    static class eTransportAdjustableProperties // enum
    {
        static SIGNED_LONG_INTEGER ComspecAdjustableBaud;
        static SIGNED_LONG_INTEGER ComspecAdjustableParity;
        static SIGNED_LONG_INTEGER ComspecAdjustableDataBits;
        static SIGNED_LONG_INTEGER ComspecAdjustableStopBits;
        static SIGNED_LONG_INTEGER ComspecAdjustableHardwareHandshaking;
        static SIGNED_LONG_INTEGER ComspecAdjustableSoftwareHandshaking;
        static SIGNED_LONG_INTEGER ComspecAdjustableDeviceId;
        static SIGNED_LONG_INTEGER EthernetAdjustablePort;
        static SIGNED_LONG_INTEGER EthernetAdjustableDeviceId;
    };

    static class TransportType // enum
    {
        static SIGNED_LONG_INTEGER Serial;
        static SIGNED_LONG_INTEGER Ir;
    };

    static class TransportTypes // enum
    {
        static SIGNED_LONG_INTEGER Ir;
        static SIGNED_LONG_INTEGER Comport;
        static SIGNED_LONG_INTEGER Tcp;
        static SIGNED_LONG_INTEGER SSL;
        static SIGNED_LONG_INTEGER Telnet;
        static SIGNED_LONG_INTEGER Http;
        static SIGNED_LONG_INTEGER Https;
        static SIGNED_LONG_INTEGER Unknown;
    };

    static class UserAttributeDataType // enum
    {
        static SIGNED_LONG_INTEGER String;
        static SIGNED_LONG_INTEGER Number;
        static SIGNED_LONG_INTEGER Boolean;
        static SIGNED_LONG_INTEGER Hex;
    };

    static class UserAttributeRequiredForConnectionType // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER Before;
        static SIGNED_LONG_INTEGER After;
    };

    static class UserAttributeType // enum
    {
        static SIGNED_LONG_INTEGER DeviceId;
        static SIGNED_LONG_INTEGER OnScreenId;
        static SIGNED_LONG_INTEGER MessageBox;
        static SIGNED_LONG_INTEGER Custom;
        static SIGNED_LONG_INTEGER Url;
    };

    static class VideoServerStateObjects // enum
    {
        static SIGNED_LONG_INTEGER Connection;
        static SIGNED_LONG_INTEGER Power;
        static SIGNED_LONG_INTEGER Authentication;
        static SIGNED_LONG_INTEGER WarmingUp;
        static SIGNED_LONG_INTEGER WarmedUp;
        static SIGNED_LONG_INTEGER CoolingDown;
        static SIGNED_LONG_INTEGER CooledDown;
        static SIGNED_LONG_INTEGER PoweredOn;
        static SIGNED_LONG_INTEGER PoweredOff;
        static SIGNED_LONG_INTEGER ActiveMediaService;
        static SIGNED_LONG_INTEGER ActiveMediaServicePlaybackState;
        static SIGNED_LONG_INTEGER Channel;
        static SIGNED_LONG_INTEGER WarmupTimeChanged;
        static SIGNED_LONG_INTEGER CooldownTimeChanged;
    };

namespace Crestron.RAD.Common.Logging;
        // class declarations
         class Logger;
         class LoggingLevel;
    static class LoggingLevel // enum
    {
        static SIGNED_LONG_INTEGER Error;
        static SIGNED_LONG_INTEGER Warning;
        static SIGNED_LONG_INTEGER Debug;
    };

namespace Crestron.RAD.Common.ModelFile;
        // class declarations
         class ModelFileAudio;
         class ModelFileFeature;
         class ModelFileInputs;
         class ModelFileOutputs;
         class ModelFilePower;
         class ModelFileVideo;
     class ModelFileAudio 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING connector[];
        STRING description[];
        STRING friendlyName[];
        STRING type[];
    };

     class ModelFileFeature 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING displayName[];
        STRING id[];
    };

     class ModelFileInputs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class ModelFileOutputs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class ModelFilePower 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER coolDownTime;
        SIGNED_LONG_INTEGER warmUpTime;
    };

     class ModelFileVideo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING connector[];
        STRING description[];
        STRING friendlyName[];
        STRING type[];
    };

namespace Crestron.RAD.Common.Events;
        // class declarations
         class CloudRegistrationEventArgs;
         class PropertyValuesEventArgs;
         class AuthenticationEventArgs;
         class DevicePresetStateEventArgs;
         class DevicePropertyValueEventArgs;
         class DevicePropertyStateEventArgs;
         class DeviceSceneStateEventArgs;
         class ListChangedAction;
     class DevicePropertyValueEventArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Key[];
    };

    static class ListChangedAction // enum
    {
        static SIGNED_LONG_INTEGER Added;
        static SIGNED_LONG_INTEGER Removed;
        static SIGNED_LONG_INTEGER Replaced;
        static SIGNED_LONG_INTEGER Reset;
    };

namespace Crestron.RAD.Common.ContractResolvers;
        // class declarations
         class IgnoreTypeContractResolver;
     class IgnoreTypeContractResolver 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Crestron.RAD.Common.BasicDriver.Ramping;
        // class declarations
         class ARampingTimer;
         class SingleMethodRampingTimer;
     class ARampingTimer 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Start ();
        FUNCTION Stop ();
        FUNCTION Dispose ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Crestron.RAD.Common.BasicDriver.FakeFeedback;
        // class declarations
         class FeedbackController;
     class FeedbackController 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Dispose ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER DurationOfFakeFeedback;
    };

namespace Crestron.RAD.Common.Attributes;
        // class declarations
         class RelatesToTypeAttribute;

namespace Crestron.RAD.Common.Attributes.Programming;
        // class declarations
         class AvailableValuesAttribute;
         class DefaultAttribute;
         class DisplayAttribute;
         class OperationType;
         class DynamicAvailableValuesAttribute;
         class IsSupportedAttribute;
         class MaxAttribute;
         class MinAttribute;
         class ProgrammableEventAttribute;
         class ProgrammableOperationAttribute;
         class TriggeredByAttribute;
         class Unit;
         class UnitAttribute;
    static class OperationType // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER Property;
        static SIGNED_LONG_INTEGER Method;
        static SIGNED_LONG_INTEGER Event;
    };

     class ProgrammableEventAttribute 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING DisplayName[];
    };

     class ProgrammableOperationAttribute 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING DisplayName[];
    };

    static class Unit // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER Celsius;
        static SIGNED_LONG_INTEGER Fahrenheit;
        static SIGNED_LONG_INTEGER Percentage;
        static SIGNED_LONG_INTEGER Millivolts;
        static SIGNED_LONG_INTEGER PartsPerMillion;
        static SIGNED_LONG_INTEGER GramsPerLiter;
        static SIGNED_LONG_INTEGER pH;
        static SIGNED_LONG_INTEGER Hours;
        static SIGNED_LONG_INTEGER Minutes;
        static SIGNED_LONG_INTEGER Seconds;
        static SIGNED_LONG_INTEGER Milliseconds;
        static SIGNED_LONG_INTEGER Years;
        static SIGNED_LONG_INTEGER Months;
        static SIGNED_LONG_INTEGER Days;
    };

namespace PreEmptive.Dotfuscator.ObfuscationAttributes;
        // class declarations
         class ObfuscationAttribute;
     class ObfuscationAttribute 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Feature[];
    };

namespace Crestron.RAD.Common.Interfaces.ExtensionDevice;
        // class declarations
         class OperationResultCode;
    static class OperationResultCode // enum
    {
        static SIGNED_LONG_INTEGER Uninitialized;
        static SIGNED_LONG_INTEGER Success;
        static SIGNED_LONG_INTEGER Error;
    };

namespace Crestron.RAD.Common.CloudReporting;
        // class declarations
         class LampInformation;
         class Consumables;
         class Lamp;
         class BasicDriverInformation;
         class Communication;
         class DeviceInfo;
         class ModelType;
         class ParentInfo;
         class Volume;
         class VideoDisplayInputSelection;
         class VideoDisplayInput;
         class Power;
         class WarmUp;
         class CoolDown;
         class PowerWarmUpCoolDown;
         class Component;
         class SystemVersions;
         class CheckEngine;
         class DeviceOperations;
         class Ethernet;
         class Adapter;
         class IpData;
         class AddressData;
         class SubDevices;
         class ThirdPartyLicense;
         class License;
         class PowerController;
         class PowerControllerSystem;
         class PowerControllerFaults;
         class PowerControllerTemperatureSensor;
         class PowerControllerOutlet;
         class PowerControllerProtection;
         class CurrentProtection;
         class VoltageProtection;
         class PowerControllerPingMonitoring;
         class PingMonitoringRule;
         class PingMonitoringAddress;
         class PowerControllerMetering;
         class MeteringInlet;
         class MeteringOutlet;
         class ReportingData;
         class DeviceTopLevel;
     class LampInformation 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class Consumables 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        Lamp Lamp;
        STRING Version[];
    };

     class Lamp 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ClearLampHours ( LampInformation lampInformation , STRING cloudKey );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class BasicDriverInformation 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Description[];
        STRING DriverVersionDate[];
        STRING DriverModel[];
        STRING LastStartedTime[];
        STRING Version[];
    };

     class Communication 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING CommunicationType[];
        STRING Version[];
    };

     class DeviceInfo 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION ResolveModel ( DeviceTypes deviceType );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static INTEGER MaxNameCharacters;

        // class properties
        STRING Category[];
        STRING Manufacturer[];
        STRING Model[];
        STRING Name[];
        STRING SerialNumber[];
        STRING Version[];
    };

    static class ModelType // enum
    {
        static SIGNED_LONG_INTEGER VideoDisplay;
        static SIGNED_LONG_INTEGER CableBox;
        static SIGNED_LONG_INTEGER VideoServer;
        static SIGNED_LONG_INTEGER BlurayPlayer;
        static SIGNED_LONG_INTEGER Avr;
    };

     class ParentInfo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ProgramLocation[];
        STRING Version[];
    };

     class Volume 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Version[];
    };

     class VideoDisplayInputSelection 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ClearVideoDisplayInput ( VideoDisplayInput input , STRING cloudKey );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Version[];
    };

     class VideoDisplayInput 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING Type[];
        VideoConnections VideoConnection;
    };

     class Power 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Version[];
    };

     class WarmUp 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static LONG_INTEGER MaxTimeInSeconds;

        // class properties
    };

     class CoolDown 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static LONG_INTEGER MaxTimeInSeconds;

        // class properties
    };

     class PowerWarmUpCoolDown 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        WarmUp WarmUp;
        CoolDown CoolDown;
        STRING Version[];
    };

     class Component 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Category[];
        STRING Name[];
        STRING Version[];
    };

     class SystemVersions 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Version[];
    };

     class CheckEngine 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING UptimeInDays[];
    };

     class DeviceOperations 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class Ethernet 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        Adapter Adapters[];
        STRING Version[];
    };

     class Adapter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING MacAddress[];
        IpData IPv4;
        IpData IPv6;
    };

     class IpData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class AddressData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Address[];
        STRING SubnetMask[];
    };

     class SubDevices 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ClearSubDevice ( ReportingData device , STRING cloudKey );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Version[];
    };

     class ThirdPartyLicense 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ClearLicense ( License license , STRING cloudKey );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Version[];
    };

     class License 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING LicenseKey[];
        STRING Status[];
        STRING ExpirationDate[];
        STRING LicensedFeatures[][];
    };

     class PowerController 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PowerControllerSystem System;
        PowerControllerFaults Faults;
        PowerControllerTemperatureSensor TemperatureSensor;
        PowerControllerProtection Protection;
        PowerControllerPingMonitoring PingMonitoring;
        PowerControllerMetering Metering;
        STRING Version[];
    };

     class PowerControllerSystem 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PowerControllerFaults 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PowerControllerTemperatureSensor 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PowerControllerOutlet 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING UpdateCause[];
    };

     class PowerControllerProtection 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CurrentProtection Current;
        VoltageProtection Voltage;
    };

     class CurrentProtection 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VoltageProtection 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PowerControllerPingMonitoring 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PingMonitoringRule 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PingMonitoringAddress 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Address[];
    };

     class PowerControllerMetering 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        MeteringInlet Inlet;
    };

     class MeteringInlet 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING EnergyInWhText[];
    };

     class MeteringOutlet 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING EnergyInWhText[];
    };

     class ReportingData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        BasicDriverInformation BasicDriverInformation;
        Communication Communication;
        Consumables Consumables;
        DeviceInfo DeviceInfo;
        ParentInfo ParentInfo;
        Power Power;
        PowerWarmUpCoolDown PowerWarmUpCoolDown;
        VideoDisplayInputSelection VideoDisplayInputSelection;
        Volume Volume;
        SystemVersions SystemVersions;
        CheckEngine CheckEngine;
        DeviceOperations DeviceOperations;
        Ethernet Ethernet;
        SubDevices SubDevices;
        ThirdPartyLicense DeviceLicense;
        PowerController PowerController;
    };

     class DeviceTopLevel 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ReportingData Device;
    };

namespace Crestron.RAD.Common.ExtensionMethods;
        // class declarations
         class ExtensionMethods;
           class Parameters;
    static class ExtensionMethods 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION PadCharacter ( STRING inputString , Parameters parameter );
        static STRING_FUNCTION GetSafeCommandString ( STRING commandString );
        static STRING_FUNCTION Unescape ( STRING inputString );
        static STRING_FUNCTION Escape ( STRING inputString );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Crestron.RAD.Common.FactoryInterfaces;
        // class declarations
         class DeviceConstructorParams;

namespace Crestron.RAD.Common.Helpers;
        // class declarations
         class AudioToneHelper;
         class CommonFeatureSupportHelper;
         class CriticalSectionDelegateWrapperBase;
         class CriticalSectionEventWrapper;
         class DropdownDescriptionHelper;
         class OsHelper;
         class ParameterHelper;
         class CommandHelper;
         class SendCommandResult;
         class SendCommandVariables;
         class WarmupCallbackVariables;
         class CoolingCallbackVariables;
         class UserAttributeHelper;
         class AttributeTypeDefaults;
         class AttributeDetails;
         class AttributeField;
         class FieldAccessibility;
         class VolumeHelper;
           class AudioToneDetail;
           class CommandSet;
           class VolumeDetail;
    static class AudioToneHelper 
    {
        // class delegates

        // class events

        // class functions
        static LONG_INTEGER_FUNCTION ScaleAudioTone ( AudioToneDetail audioToneDetail );
        static LONG_INTEGER_FUNCTION GetScaledPercentValue ( SIGNED_LONG_INTEGER unscaledValue , SIGNED_LONG_INTEGER max , SIGNED_LONG_INTEGER min );
        static LONG_INTEGER_FUNCTION ScaleValueToPercent ( SIGNED_LONG_INTEGER value , SIGNED_LONG_INTEGER max , SIGNED_LONG_INTEGER min );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class CommonFeatureSupportHelper 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION GetDescription ( CommonFeatureSupport supportEnum );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class CriticalSectionDelegateWrapperBase 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class CriticalSectionEventWrapper 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Dispose ();
        FUNCTION ClearSubscribers ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class DropdownDescriptionHelper 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class OsHelper 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION ConvertPathBasedOnOs ( STRING path );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class ParameterHelper 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION ReplaceParameter ( STRING Command , STRING Parameter , STRING NewValue );
        static STRING_FUNCTION FormatValue ( INTEGER Value , Parameters Parameter );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static STRING IDParameter[];
        static STRING DataFormattingFlag[];
        static STRING DataTypeFlag[];

        // class properties
    };

    static class CommandHelper 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class SendCommandResult 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class SendCommandVariables 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CommandSet PendingRequest;
    };

     class WarmupCallbackVariables 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class CoolingCallbackVariables 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class UserAttributeHelper 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class AttributeTypeDefaults 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        UserAttributeType AttributeType;
    };

    static class AttributeField // enum
    {
        static SIGNED_LONG_INTEGER AttributeType;
        static SIGNED_LONG_INTEGER ParameterId;
        static SIGNED_LONG_INTEGER Label;
        static SIGNED_LONG_INTEGER Description;
        static SIGNED_LONG_INTEGER DataType;
        static SIGNED_LONG_INTEGER DataMask;
        static SIGNED_LONG_INTEGER DefaultValue;
        static SIGNED_LONG_INTEGER DefaultValueLabel;
    };

    static class FieldAccessibility // enum
    {
        static SIGNED_LONG_INTEGER NotVisible;
        static SIGNED_LONG_INTEGER Editable;
        static SIGNED_LONG_INTEGER ReadOnly;
    };

    static class VolumeHelper 
    {
        // class delegates

        // class events

        // class functions
        static LONG_INTEGER_FUNCTION ScaleVolume ( VolumeDetail volumeDetail );
        static LONG_INTEGER_FUNCTION GetScaledPercentValue ( LONG_INTEGER unscaledValue , LONG_INTEGER max , LONG_INTEGER min );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Crestron.RAD.Common.Transports;
        // class declarations
         class ATransportDriver;
         class DataObjects;
         class DriverMetadata;
         class HttpsTransport;
         class HttpTransport;
         class ComPortSpec;
         class IrFileReader;
         class RestTransport;
         class SimplTransport;
         class TcpSSLTransport;
         class TcpTransport;
         class TelnetTransport;
     class ATransportDriver 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Start ();
        FUNCTION Stop ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER DriverID;
        LONG_INTEGER TimeOut;
        TransportType TransportType;
    };

     class DataObjects 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class DriverMetadata 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING DeviceType[];
        STRING Manufacturer[];
        STRING DeviceModel[];
    };

     class HttpsTransport 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Initialize ( STRING address , SIGNED_LONG_INTEGER port );
        FUNCTION Start ();
        FUNCTION Stop ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING HttpsUserName[];
        STRING HttpsPassword[];

        // class properties
        SIGNED_LONG_INTEGER DriverID;
        LONG_INTEGER TimeOut;
        TransportType TransportType;
    };

     class HttpTransport 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Initialize ( STRING address , SIGNED_LONG_INTEGER port );
        FUNCTION Start ();
        FUNCTION Stop ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER DriverID;
        LONG_INTEGER TimeOut;
        TransportType TransportType;
    };

     class ComPortSpec 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        eComBaudRates BaudRate;
        eComDataBits DataBits;
        eComParityType Parity;
        eComStopBits StopBits;
        eComProtocolType Protocol;
        eComHardwareHandshakeType HardwareHandShake;
        eComSoftwareHandshakeType SoftwareHandshake;
    };

     class IrFileReader 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION LoadIrFile ( STRING irFileName );
        FUNCTION TriggerFunctionRelease ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING Manufacturer[];
        STRING Model[];
        STRING DeviceType[];

        // class properties
    };

     class RestTransport 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Start ();
        FUNCTION Stop ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER DriverID;
        LONG_INTEGER TimeOut;
        TransportType TransportType;
    };

     class SimplTransport 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Start ();
        FUNCTION Stop ();
        FUNCTION ReceiveData ( STRING data );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER DriverID;
        LONG_INTEGER TimeOut;
        TransportType TransportType;
    };

     class TcpSSLTransport 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Start ();
        FUNCTION Stop ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER DriverID;
        LONG_INTEGER TimeOut;
        TransportType TransportType;
    };

     class TcpTransport 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Initialize ( STRING address , SIGNED_LONG_INTEGER port );
        FUNCTION Start ();
        FUNCTION Stop ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER DriverID;
        LONG_INTEGER TimeOut;
        TransportType TransportType;
    };

     class TelnetTransport 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Start ();
        FUNCTION Stop ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER DriverID;
        LONG_INTEGER TimeOut;
        TransportType TransportType;
    };

namespace Crestron.RAD.DeviceTypes.AudioVideoSwitcher.Extender;
        // class declarations
         class AudioVideoExtender;
         class AudioVideoExtenderCecPort;
         class AudioVideoExtenderPort;
         class AudioVideoExtenderComPort;
         class AudioVideoExtenderGenerioIo;
         class AudioVideoExtenderRelay;
           class AudioVideoExtenderFeedback;
     class AudioVideoExtender 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION MuteOn ();
        FUNCTION MuteOff ();
        FUNCTION Mute ();
        FUNCTION SetVolume ( LONG_INTEGER volume );
        FUNCTION VolumeUp ( CommandAction action );
        FUNCTION VolumeDown ( CommandAction action );
        FUNCTION ToneControlOn ();
        FUNCTION ToneControlOff ();
        FUNCTION ToneControlToggle ();
        FUNCTION SetBass ( SIGNED_LONG_INTEGER value );
        FUNCTION SetTreble ( SIGNED_LONG_INTEGER value );
        FUNCTION BassUp ( CommandAction action );
        FUNCTION BassDown ( CommandAction action );
        FUNCTION TrebleUp ( CommandAction action );
        FUNCTION TrebleDown ( CommandAction action );
        FUNCTION LoudnessOn ();
        FUNCTION LoudnessOff ();
        FUNCTION ToggleLoudness ();
        FUNCTION ResetBassToDefaultValue ();
        FUNCTION ResetTrebleToDefaultValue ();
        FUNCTION SpeakerProtectOn ();
        FUNCTION SpeakerProtectOff ();
        FUNCTION SpeakerProtectToggle ();
        FUNCTION Dispose ();
        FUNCTION RouteVideoInput ( STRING inputId , STRING outputId );
        FUNCTION RouteAudioInput ( STRING inputId , STRING outputId );
        FUNCTION PowerOn ();
        FUNCTION PowerOff ();
        FUNCTION PowerToggle ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AudioVideoExtenderFeedback Feedback;
        STRING Id[];
        STRING Name[];
        STRING Manufacturer[];
        STRING Model[];
        AudioVideoExtenderType Type;
        STRING VideoSourceExtenderId[];
        STRING AudioSourceExtenderId[];
        DcFaultState DcFaultState;
        STRING ApiIdentifier[];
        LONG_INTEGER WarmUpTime;
        LONG_INTEGER CoolDownTime;
        LONG_INTEGER VolumePercent;
        STRING VolumeDb[];
        SIGNED_LONG_INTEGER BassPercent;
        STRING BassDb[];
        SIGNED_LONG_INTEGER TreblePrecent;
        STRING TrebleDb[];
    };

     class AudioVideoExtenderCecPort 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION OnIncomingData ( STRING data );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PortType Type;
        PortDirection Direction;
        STRING Name[];
        STRING Id[];
    };

     class AudioVideoExtenderPort 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PortType Type;
        PortDirection Direction;
        STRING Name[];
        STRING Id[];
    };

     class AudioVideoExtenderComPort 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION SetConfiguration ( ComPortSpec configuration );
        FUNCTION OnIncomingData ( STRING data );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PortType Type;
        PortDirection Direction;
        STRING Name[];
        STRING Id[];
    };

     class AudioVideoExtenderGenerioIo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER AnalogInputValue;
        PortType Type;
        PortDirection Direction;
        STRING Name[];
        STRING Id[];
    };

     class AudioVideoExtenderRelay 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PortType Type;
        PortDirection Direction;
        STRING Name[];
        STRING Id[];
    };

namespace Crestron.RAD.DeviceTypes.AudioVideoSwitcher.RootObject;
        // class declarations
         class AudioVideoSwitcherRootObject;
         class AudioVideoSwitcherDeviceApi;
         class AudioVideoSwitcherApi;
         class AudioVideoSwitcherFeedback;
         class AudioVideoExtenderFeedback;
         class OnOffFeedback;
         class PowerFeedback;
         class DcFaultStateFeedback;
         class AudioIsClippingFeedback;
         class MuteFeedback;
         class VolumeFeedback;
         class BassFeedback;
         class TrebleFeedback;
         class ToneControlFeedback;
         class LoudnessFeedback;
         class SpeakerProtectFeedback;
         class TemperatureFeedback;
         class RoutedExtenderFeedback;
         class AudioVideoSwitcherData;
           class CrestronSerialDeviceApi;
           class GeneralInformation;
           class Api;
           class PowerWaitPeriod;
           class MediaServiceProviderData;
           class Feedback;
           class CommandAckNak;
           class ScalingInformation;
     class AudioVideoSwitcherRootObject 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION set_CrestronSerialDeviceApi ( CrestronSerialDeviceApi value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AudioVideoSwitcherDeviceApi CrestronSerialDeviceApi;
    };

     class AudioVideoSwitcherDeviceApi 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION set_Api ( Api value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AudioVideoSwitcherApi Api;
        GeneralInformation GeneralInformation;
    };

     class AudioVideoSwitcherApi 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION set_Feedback ( Feedback value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AudioVideoSwitcherData AudioVideoSwitcher;
        AudioVideoSwitcherFeedback Feedback;
        Communication Communication;
        PowerWaitPeriod PowerWaitPeriod;
        MediaServiceProviderData MediaServiceProviders;
    };

     class AudioVideoSwitcherFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ApiDelimiter[];
        PowerFeedback PowerFeedback;
        TemperatureFeedback TemperatureFeedback;
        RoutedExtenderFeedback RoutedExtenderFeedback;
        CommandAckNak CommandAckNak;
        STRING Header[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING ConnectedStatePollCommand[];
    };

     class AudioVideoExtenderFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PowerFeedback PowerFeedback;
        MuteFeedback MuteFeedback;
        VolumeFeedback VolumeFeedback;
        BassFeedback BassFeedback;
        TrebleFeedback TrebleFeedback;
        ToneControlFeedback ToneControlFeedback;
        LoudnessFeedback LoudnessFeedback;
        SpeakerProtectFeedback SpeakerProtectFeedback;
        DcFaultStateFeedback DcFaultStateFeedback;
        AudioIsClippingFeedback AudioIsClippingFeedback;
        RoutedExtenderFeedback RoutedExtenderFeedback;
        CommandAckNak CommandAckNak;
        STRING Header[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING ConnectedStatePollCommand[];
    };

    static class OnOffFeedback // enum
    {
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
    };

     class PowerFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class DcFaultStateFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class AudioIsClippingFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class MuteFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class VolumeFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class BassFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class TrebleFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class ToneControlFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class LoudnessFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class SpeakerProtectFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class TemperatureFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ValueGroupHeader[];
        STRING UnitGroupHeader[];
        STRING MetricIdentifer[];
        STRING StandardIdentifier[];
    };

     class RoutedExtenderFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class AudioVideoSwitcherData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING NullInputIdentifier[];
        INTEGER VolumeRampingRate;
        INTEGER BassRampingRate;
        INTEGER TrebleRampingRate;
        ScalingInformation VolumeScalingInfo;
        ScalingInformation BassScalingInfo;
        ScalingInformation TrebleScalingInfo;
    };

namespace Crestron.RAD.DeviceTypes.AudioVideoSwitcher.Converters;
        // class declarations
         class AudioVideoExtenderPortConverter;
     class AudioVideoExtenderPortConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Crestron.RAD.Common.Interfaces;
        // class declarations
         class AuxiliaryButton;
         class AuxiliaryButtonLed;
         class DriverSettingsEventArgs;
         class KeypadLabels;
         class DisplayMessageEnum;
         class StateConsts;
         class SessionState;
         class PanoptoSession;
         class PanoptoFeedback;
         class PreviewData;
     class AuxiliaryButton 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Index;
        STRING PrimaryLabel[];
        STRING SecondaryLabel[];
        AuxiliaryButtonIcon AuxiliaryButtonIcon;
        AuxiliaryButtonLed Led;
    };

     class AuxiliaryButtonLed 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AuxiliaryButtonLedColors Color;
    };

     class KeypadLabels 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING PrimaryLabel[];
        STRING SecondaryLabel[];
    };

    static class DisplayMessageEnum // enum
    {
        static SIGNED_LONG_INTEGER LoggingIn;
        static SIGNED_LONG_INTEGER SchedulingSession;
        static SIGNED_LONG_INTEGER UnableToScheduleSession;
        static SIGNED_LONG_INTEGER AbleToScheduleSession;
        static SIGNED_LONG_INTEGER StartingSessionEarly;
        static SIGNED_LONG_INTEGER UnableToStartSessionEarly;
        static SIGNED_LONG_INTEGER ExtendingSession;
        static SIGNED_LONG_INTEGER UnableToExtendSession;
        static SIGNED_LONG_INTEGER BeginningPreview;
        static SIGNED_LONG_INTEGER BeginningPause;
        static SIGNED_LONG_INTEGER Resuming;
        static SIGNED_LONG_INTEGER Stopping;
        static SIGNED_LONG_INTEGER UnableToStop;
        static SIGNED_LONG_INTEGER UnableToAccessRemoteRecorder;
        static SIGNED_LONG_INTEGER UnableToLogIn;
        static SIGNED_LONG_INTEGER NoNewSessions;
        static SIGNED_LONG_INTEGER UnableToResume;
        static SIGNED_LONG_INTEGER NewVideoPreview;
        static SIGNED_LONG_INTEGER NewAudioPreview;
    };

    static class StateConsts 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static STRING InitialState[];
        static STRING IdleState[];
        static STRING PreviewState[];
        static STRING BroadcastState[];
        static STRING RecordingState[];
        static STRING PauseState[];

        // class properties
    };

    static class SessionState // enum
    {
        static SIGNED_LONG_INTEGER Created;
        static SIGNED_LONG_INTEGER Scheduled;
        static SIGNED_LONG_INTEGER Recording;
        static SIGNED_LONG_INTEGER Broadcasting;
        static SIGNED_LONG_INTEGER Processing;
        static SIGNED_LONG_INTEGER Complete;
    };

     class PanoptoSession 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Description[];
        SessionState State;
        STRING Name[];
    };

     class PanoptoFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING DriverState[];
        DisplayMessageEnum FeedbackMessageValue;
        PanoptoSession SessionInfo;
    };

     class PreviewData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING AudioHistogramPreviewUrl[];
        STRING VideoPreviewUrl[];
    };

namespace Crestron.RAD.Common.StandardCommands;
        // class declarations
         class IrCommandConstants;
         class IrStandardCommandIds;
         class StandardCommand;
         class StandardCommands;
     class IrCommandConstants 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static STRING AllLampsOff[];
        static STRING AllLampsOn[];
        static STRING Antenna[];
        static STRING ArrowDown[];
        static STRING ArrowLeft[];
        static STRING ArrowRight[];
        static STRING ArrowUp[];
        static STRING Aspect1[];
        static STRING Aspect2[];
        static STRING Aspect3[];
        static STRING Aspect4[];
        static STRING Aspect5[];
        static STRING Aspect6[];
        static STRING Aspect7[];
        static STRING Aspect8[];
        static STRING Asterisk[];
        static STRING Auto[];
        static STRING Aux1[];
        static STRING Aux2[];
        static STRING ChannelUp[];
        static STRING ChannelDown[];
        static STRING ChannelPoll[];
        static STRING ChannelTune[];
        static STRING Eject[];
        static STRING Enter[];
        static STRING Home[];
        static STRING Info[];
        static STRING Input1[];
        static STRING Input10[];
        static STRING Input2[];
        static STRING Input3[];
        static STRING Input4[];
        static STRING Input5[];
        static STRING Input6[];
        static STRING Input7[];
        static STRING Input8[];
        static STRING Input9[];
        static STRING Input11[];
        static STRING Input12[];
        static STRING Input13[];
        static STRING Input14[];
        static STRING Input15[];
        static STRING Input16[];
        static STRING Input17[];
        static STRING Input18[];
        static STRING Input19[];
        static STRING Input20[];
        static STRING Input21[];
        static STRING Input22[];
        static STRING Input23[];
        static STRING Input24[];
        static STRING Input25[];
        static STRING Input26[];
        static STRING Input27[];
        static STRING Input28[];
        static STRING Input29[];
        static STRING Input30[];
        static STRING Input31[];
        static STRING Input32[];
        static STRING Input33[];
        static STRING Input34[];
        static STRING Input35[];
        static STRING Input36[];
        static STRING Input37[];
        static STRING Input38[];
        static STRING Input39[];
        static STRING Input40[];
        static STRING Input41[];
        static STRING Input42[];
        static STRING Input43[];
        static STRING Input44[];
        static STRING Input45[];
        static STRING Input46[];
        static STRING Input47[];
        static STRING Input48[];
        static STRING Input49[];
        static STRING Input50[];
        static STRING Mute[];
        static STRING MuteOff[];
        static STRING MuteOn[];
        static STRING Osd[];
        static STRING OsdOff[];
        static STRING OsdOn[];
        static STRING OsdPoll[];
        static STRING Power[];
        static STRING PowerOff[];
        static STRING PowerOn[];
        static STRING Select[];
        static STRING VolMinus[];
        static STRING VolPlus[];
        static STRING Vol[];
        static STRING _0[];
        static STRING _1[];
        static STRING _2[];
        static STRING _3[];
        static STRING _4[];
        static STRING _5[];
        static STRING _6[];
        static STRING _7[];
        static STRING _8[];
        static STRING _9[];
        static STRING Octothorpe[];
        static STRING KeypadBackSpace[];
        static STRING Vga1[];
        static STRING Vga10[];
        static STRING Vga2[];
        static STRING Vga3[];
        static STRING Vga4[];
        static STRING Vga5[];
        static STRING Vga6[];
        static STRING Vga7[];
        static STRING Vga8[];
        static STRING Vga9[];
        static STRING Hdmi1[];
        static STRING Hdmi10[];
        static STRING Hdmi2[];
        static STRING Hdmi3[];
        static STRING Hdmi4[];
        static STRING Hdmi5[];
        static STRING Hdmi6[];
        static STRING Hdmi7[];
        static STRING Hdmi8[];
        static STRING Hdmi9[];
        static STRING Dvi1[];
        static STRING Dvi10[];
        static STRING Dvi2[];
        static STRING Dvi3[];
        static STRING Dvi4[];
        static STRING Dvi5[];
        static STRING Dvi6[];
        static STRING Dvi7[];
        static STRING Dvi8[];
        static STRING Dvi9[];
        static STRING Component1[];
        static STRING Component10[];
        static STRING Component2[];
        static STRING Component3[];
        static STRING Component4[];
        static STRING Component5[];
        static STRING Component6[];
        static STRING Component7[];
        static STRING Component8[];
        static STRING Component9[];
        static STRING Composite1[];
        static STRING Composite10[];
        static STRING Composite2[];
        static STRING Composite3[];
        static STRING Composite4[];
        static STRING Composite5[];
        static STRING Composite6[];
        static STRING Composite7[];
        static STRING Composite8[];
        static STRING Composite9[];
        static STRING DisplayPort1[];
        static STRING DisplayPort10[];
        static STRING DisplayPort2[];
        static STRING DisplayPort3[];
        static STRING DisplayPort4[];
        static STRING DisplayPort5[];
        static STRING DisplayPort6[];
        static STRING DisplayPort7[];
        static STRING DisplayPort8[];
        static STRING DisplayPort9[];
        static STRING Usb1[];
        static STRING Usb2[];
        static STRING Usb3[];
        static STRING Usb4[];
        static STRING Usb5[];
        static STRING Antenna1[];
        static STRING Antenna2[];
        static STRING Network1[];
        static STRING Network10[];
        static STRING Network2[];
        static STRING Network3[];
        static STRING Network4[];
        static STRING Network5[];
        static STRING Network6[];
        static STRING Network7[];
        static STRING Network8[];
        static STRING Network9[];
        static STRING Dvd1[];
        static STRING Sat1[];
        static STRING Tv[];
        static STRING Cd[];
        static STRING Tuner[];
        static STRING Phono[];
        static STRING Dss[];
        static STRING EnergyStarOn[];
        static STRING EnergyStarOff[];
        static STRING EnergyStar[];
        static STRING VideoMuteOn[];
        static STRING VideoMuteOff[];
        static STRING VideoMute[];
        static STRING Audio[];
        static STRING Blue[];
        static STRING Clear[];
        static STRING Display[];
        static STRING DownArrow[];
        static STRING UpArrow[];
        static STRING LeftArrow[];
        static STRING RightArrow[];
        static STRING Exit[];
        static STRING ForwardScan[];
        static STRING ReverseScan[];
        static STRING Green[];
        static STRING Options[];
        static STRING Pause[];
        static STRING Play[];
        static STRING PlayPause[];
        static STRING Red[];
        static STRING Repeat[];
        static STRING Return[];
        static STRING Stop[];
        static STRING Subtitle[];
        static STRING TopMenu[];
        static STRING ForwardSkip[];
        static STRING ReverseSkip[];
        static STRING Yellow[];
        static STRING PopUpMenu[];
        static STRING Menu[];
        static STRING A[];
        static STRING B[];
        static STRING C[];
        static STRING D[];
        static STRING Back[];
        static STRING Dvr[];
        static STRING Favorite[];
        static STRING Guide[];
        static STRING Last[];
        static STRING Live[];
        static STRING PageDown[];
        static STRING PageUp[];
        static STRING Record[];
        static STRING Replay[];
        static STRING SpeedSlow[];
        static STRING ThumbsUp[];
        static STRING ThumbsDown[];
        static STRING Channel[];
        static STRING Dash[];
        static STRING Period[];
        static STRING XmRadio[];
        static STRING InternetRadio[];
        static STRING Sirius[];
        static STRING SiriusXm[];
        static STRING Pandora[];
        static STRING LastFm[];
        static STRING Rhapsody[];
        static STRING HdRadio[];
        static STRING Spotify[];
        static STRING YouTube[];
        static STRING YouTubeTv[];
        static STRING Netflix[];
        static STRING Hulu[];
        static STRING DirecTvNow[];
        static STRING AmazonVideo[];
        static STRING PlaystationVue[];
        static STRING SlingTv[];
        static STRING Airplay[];
        static STRING GoogleCast[];
        static STRING DLNA[];
        static STRING Tidal[];
        static STRING Deezer[];
        static STRING Crackle[];
        static STRING OnDemand[];
        static STRING GooglePlay[];
        static STRING Bluetooth[];
        static STRING TuneUp[];
        static STRING TuneDown[];
        static STRING Tivo[];
        static STRING RSkip[];
        static STRING FSkip[];
        static STRING Settings[];
        static STRING Optical1[];
        static STRING Optical2[];
        static STRING Optical3[];
        static STRING Optical4[];
        static STRING Optical5[];
        static STRING Optical6[];
        static STRING Optical7[];
        static STRING Optical8[];
        static STRING Optical9[];
        static STRING Optical10[];
        static STRING Coax1[];
        static STRING Coax2[];
        static STRING Coax3[];
        static STRING Coax4[];
        static STRING Coax5[];
        static STRING Coax6[];
        static STRING Coax7[];
        static STRING Coax8[];
        static STRING Coax9[];
        static STRING Coax10[];
        static STRING AnalogAudio1[];
        static STRING AnalogAudio2[];
        static STRING AnalogAudio3[];
        static STRING AnalogAudio4[];
        static STRING AnalogAudio5[];
        static STRING AnalogAudio6[];
        static STRING AnalogAudio7[];
        static STRING AnalogAudio8[];
        static STRING AnalogAudio9[];
        static STRING AnalogAudio10[];
        static STRING Search[];
        static STRING Bd1[];
        static STRING Catv1[];
        static STRING Game1[];
        static STRING Pc1[];
        static STRING Bluetooth1[];
        static STRING MediaPlayer1[];
        static STRING Ipod1[];
        static STRING TunerPresetUp[];
        static STRING TunerPresetDown[];
        static STRING AutoFrequencyUp[];
        static STRING AutoFrequencyDown[];
        static STRING BandAm[];
        static STRING BandFm[];
        static STRING BassLevelUp[];
        static STRING BassLevelDown[];
        static STRING TrebleLevelUp[];
        static STRING TrebleLevelDown[];
        static STRING LoudnessOn[];
        static STRING LoudnessOff[];
        static STRING LoudnessToggle[];
        static STRING ToneControlOn[];
        static STRING ToneControlOff[];
        static STRING ToneControlToggle[];
        static STRING SurroundModeCycle[];
        static STRING Output1[];
        static STRING Output2[];
        static STRING Output3[];
        static STRING Output4[];
        static STRING Output5[];
        static STRING Output6[];
        static STRING Output7[];
        static STRING Output8[];
        static STRING Output9[];
        static STRING Output10[];

        // class properties
    };

    static class IrStandardCommandIds // enum
    {
        static SIGNED_LONG_INTEGER Octothorpe;
        static SIGNED_LONG_INTEGER Asterisk;
        static SIGNED_LONG_INTEGER _0;
        static SIGNED_LONG_INTEGER _1;
        static SIGNED_LONG_INTEGER _2;
        static SIGNED_LONG_INTEGER _3;
        static SIGNED_LONG_INTEGER _4;
        static SIGNED_LONG_INTEGER _5;
        static SIGNED_LONG_INTEGER _6;
        static SIGNED_LONG_INTEGER _7;
        static SIGNED_LONG_INTEGER _8;
        static SIGNED_LONG_INTEGER _9;
        static SIGNED_LONG_INTEGER AUX1;
        static SIGNED_LONG_INTEGER AUX2;
        static SIGNED_LONG_INTEGER CD;
        static SIGNED_LONG_INTEGER ChannelDown;
        static SIGNED_LONG_INTEGER ChannelUp;
        static SIGNED_LONG_INTEGER Clear;
        static SIGNED_LONG_INTEGER DownArrow;
        static SIGNED_LONG_INTEGER DSS;
        static SIGNED_LONG_INTEGER Eject;
        static SIGNED_LONG_INTEGER Enter;
        static SIGNED_LONG_INTEGER Exit;
        static SIGNED_LONG_INTEGER Favorite;
        static SIGNED_LONG_INTEGER ForwardScan;
        static SIGNED_LONG_INTEGER Guide;
        static SIGNED_LONG_INTEGER Home;
        static SIGNED_LONG_INTEGER Input1;
        static SIGNED_LONG_INTEGER Input10;
        static SIGNED_LONG_INTEGER Input2;
        static SIGNED_LONG_INTEGER Input3;
        static SIGNED_LONG_INTEGER Input4;
        static SIGNED_LONG_INTEGER Input5;
        static SIGNED_LONG_INTEGER Input6;
        static SIGNED_LONG_INTEGER Input7;
        static SIGNED_LONG_INTEGER Input8;
        static SIGNED_LONG_INTEGER Input9;
        static SIGNED_LONG_INTEGER Last;
        static SIGNED_LONG_INTEGER LeftArrow;
        static SIGNED_LONG_INTEGER Menu;
        static SIGNED_LONG_INTEGER Mute;
        static SIGNED_LONG_INTEGER MuteOff;
        static SIGNED_LONG_INTEGER MuteOn;
        static SIGNED_LONG_INTEGER Pause;
        static SIGNED_LONG_INTEGER Play;
        static SIGNED_LONG_INTEGER Power;
        static SIGNED_LONG_INTEGER PowerOff;
        static SIGNED_LONG_INTEGER PowerOn;
        static SIGNED_LONG_INTEGER PresetMinus;
        static SIGNED_LONG_INTEGER PresetPlus;
        static SIGNED_LONG_INTEGER Record;
        static SIGNED_LONG_INTEGER Repeat;
        static SIGNED_LONG_INTEGER Return;
        static SIGNED_LONG_INTEGER RightArrow;
        static SIGNED_LONG_INTEGER ReverseScan;
        static SIGNED_LONG_INTEGER ReverseSkip;
        static SIGNED_LONG_INTEGER ForwardSkip;
        static SIGNED_LONG_INTEGER TUNER;
        static SIGNED_LONG_INTEGER UpArrow;
        static SIGNED_LONG_INTEGER VolMinus;
        static SIGNED_LONG_INTEGER VolPlus;
        static SIGNED_LONG_INTEGER PageUp;
        static SIGNED_LONG_INTEGER PageDown;
        static SIGNED_LONG_INTEGER PHONO;
        static SIGNED_LONG_INTEGER HangUp;
        static SIGNED_LONG_INTEGER NearEndZoomPlus;
        static SIGNED_LONG_INTEGER NearEndZoomMinus;
        static SIGNED_LONG_INTEGER NearEndFocusPlus;
        static SIGNED_LONG_INTEGER NearEndFocusMinus;
        static SIGNED_LONG_INTEGER NearEndPanLeft;
        static SIGNED_LONG_INTEGER NearEndPanRight;
        static SIGNED_LONG_INTEGER NearEndTiltUp;
        static SIGNED_LONG_INTEGER NearEndTiltDown;
        static SIGNED_LONG_INTEGER FarEndZoomPlus;
        static SIGNED_LONG_INTEGER FarEndZoomMinus;
        static SIGNED_LONG_INTEGER FarEndFocusPlus;
        static SIGNED_LONG_INTEGER FarEndFocusMinus;
        static SIGNED_LONG_INTEGER FarEndPanLeft;
        static SIGNED_LONG_INTEGER FarEndPanRight;
        static SIGNED_LONG_INTEGER FarEndTiltUp;
        static SIGNED_LONG_INTEGER FarEndTiltDown;
        static SIGNED_LONG_INTEGER Component1;
        static SIGNED_LONG_INTEGER OnScreenDisplay;
        static SIGNED_LONG_INTEGER OnScreenDisplayOn;
        static SIGNED_LONG_INTEGER OnScreenDisplayOff;
        static SIGNED_LONG_INTEGER Component2;
        static SIGNED_LONG_INTEGER Dvi1;
        static SIGNED_LONG_INTEGER PictureMute;
        static SIGNED_LONG_INTEGER PictureMuteOn;
        static SIGNED_LONG_INTEGER PictureMuteOff;
        static SIGNED_LONG_INTEGER DVD;
        static SIGNED_LONG_INTEGER TV;
        static SIGNED_LONG_INTEGER SAT;
        static SIGNED_LONG_INTEGER Hdmi1;
        static SIGNED_LONG_INTEGER Hdmi2;
        static SIGNED_LONG_INTEGER Hdmi3;
        static SIGNED_LONG_INTEGER Hdmi4;
        static SIGNED_LONG_INTEGER Info;
        static SIGNED_LONG_INTEGER A;
        static SIGNED_LONG_INTEGER B;
        static SIGNED_LONG_INTEGER C;
        static SIGNED_LONG_INTEGER Replay;
        static SIGNED_LONG_INTEGER Live;
        static SIGNED_LONG_INTEGER Dvr;
        static SIGNED_LONG_INTEGER Dash;
        static SIGNED_LONG_INTEGER TUNE_TOGGLE;
        static SIGNED_LONG_INTEGER XmRadio;
        static SIGNED_LONG_INTEGER TopMenu;
        static SIGNED_LONG_INTEGER PopUpMenu;
        static SIGNED_LONG_INTEGER Red;
        static SIGNED_LONG_INTEGER Green;
        static SIGNED_LONG_INTEGER Blue;
        static SIGNED_LONG_INTEGER Yellow;
        static SIGNED_LONG_INTEGER Back;
        static SIGNED_LONG_INTEGER Search;
        static SIGNED_LONG_INTEGER Hdmi5;
        static SIGNED_LONG_INTEGER Hdmi6;
        static SIGNED_LONG_INTEGER KeypadBackSpace;
        static SIGNED_LONG_INTEGER Select;
        static SIGNED_LONG_INTEGER PLAY_PAUSE;
        static SIGNED_LONG_INTEGER VGA_1;
        static SIGNED_LONG_INTEGER VGA_2;
        static SIGNED_LONG_INTEGER VGA_3;
        static SIGNED_LONG_INTEGER VGA_4;
        static SIGNED_LONG_INTEGER VGA_5;
        static SIGNED_LONG_INTEGER DVI_1;
        static SIGNED_LONG_INTEGER DVI_2;
        static SIGNED_LONG_INTEGER DVI_3;
        static SIGNED_LONG_INTEGER DVI_4;
        static SIGNED_LONG_INTEGER DVI_5;
        static SIGNED_LONG_INTEGER DISPLAY_PORT_1;
        static SIGNED_LONG_INTEGER DISPLAY_PORT_2;
        static SIGNED_LONG_INTEGER DISPLAY_PORT_3;
        static SIGNED_LONG_INTEGER DISPLAY_PORT_4;
        static SIGNED_LONG_INTEGER DISPLAY_PORT_5;
        static SIGNED_LONG_INTEGER NETWORK_1;
        static SIGNED_LONG_INTEGER NETWORK_2;
        static SIGNED_LONG_INTEGER NETWORK_3;
        static SIGNED_LONG_INTEGER NETWORK_4;
        static SIGNED_LONG_INTEGER NETWORK_5;
        static SIGNED_LONG_INTEGER NETWORK_6;
        static SIGNED_LONG_INTEGER NETWORK_7;
        static SIGNED_LONG_INTEGER NETWORK_8;
        static SIGNED_LONG_INTEGER NETWORK_9;
        static SIGNED_LONG_INTEGER NETWORK_10;
        static SIGNED_LONG_INTEGER HDMI_7;
        static SIGNED_LONG_INTEGER HDMI_8;
        static SIGNED_LONG_INTEGER HDMI_9;
        static SIGNED_LONG_INTEGER HDMI_10;
        static SIGNED_LONG_INTEGER D;
        static SIGNED_LONG_INTEGER AUDIO;
        static SIGNED_LONG_INTEGER INTERNET_RADIO;
        static SIGNED_LONG_INTEGER SIRIUS;
        static SIGNED_LONG_INTEGER SIRIUS_XM;
        static SIGNED_LONG_INTEGER PANDORA;
        static SIGNED_LONG_INTEGER LAST_FM;
        static SIGNED_LONG_INTEGER RHAPSODY;
        static SIGNED_LONG_INTEGER HD_RADIO;
        static SIGNED_LONG_INTEGER SPOTIFY;
        static SIGNED_LONG_INTEGER YOUTUBE;
        static SIGNED_LONG_INTEGER YOUTUBE_TV;
        static SIGNED_LONG_INTEGER NETFLIX;
        static SIGNED_LONG_INTEGER HULU;
        static SIGNED_LONG_INTEGER DIRECTV_NOW;
        static SIGNED_LONG_INTEGER AMAZON_VIDEO;
        static SIGNED_LONG_INTEGER PLAYSTATION_VUE;
        static SIGNED_LONG_INTEGER SLING_TV;
        static SIGNED_LONG_INTEGER THUMBS_UP;
        static SIGNED_LONG_INTEGER THUMBS_DOWN;
        static SIGNED_LONG_INTEGER PERIOD;
        static SIGNED_LONG_INTEGER OPTIONS;
        static SIGNED_LONG_INTEGER SUBTITLE;
        static SIGNED_LONG_INTEGER TUNE_PLUS;
        static SIGNED_LONG_INTEGER TUNE_MINUS;
        static SIGNED_LONG_INTEGER AIRPLAY;
        static SIGNED_LONG_INTEGER GOOGLECAST;
        static SIGNED_LONG_INTEGER DLNA;
        static SIGNED_LONG_INTEGER TIDAL;
        static SIGNED_LONG_INTEGER DEEZER;
        static SIGNED_LONG_INTEGER CRACKLE;
        static SIGNED_LONG_INTEGER TIVO;
        static SIGNED_LONG_INTEGER ON_DEMAND;
        static SIGNED_LONG_INTEGER R_SKIP;
        static SIGNED_LONG_INTEGER F_SKIP;
        static SIGNED_LONG_INTEGER OPTICAL_1;
        static SIGNED_LONG_INTEGER OPTICAL_2;
        static SIGNED_LONG_INTEGER OPTICAL_3;
        static SIGNED_LONG_INTEGER OPTICAL_4;
        static SIGNED_LONG_INTEGER OPTICAL_5;
        static SIGNED_LONG_INTEGER OPTICAL_6;
        static SIGNED_LONG_INTEGER OPTICAL_7;
        static SIGNED_LONG_INTEGER OPTICAL_8;
        static SIGNED_LONG_INTEGER OPTICAL_9;
        static SIGNED_LONG_INTEGER OPTICAL_10;
        static SIGNED_LONG_INTEGER COAX_1;
        static SIGNED_LONG_INTEGER COAX_2;
        static SIGNED_LONG_INTEGER COAX_3;
        static SIGNED_LONG_INTEGER COAX_4;
        static SIGNED_LONG_INTEGER COAX_5;
        static SIGNED_LONG_INTEGER COAX_6;
        static SIGNED_LONG_INTEGER COAX_7;
        static SIGNED_LONG_INTEGER COAX_8;
        static SIGNED_LONG_INTEGER COAX_9;
        static SIGNED_LONG_INTEGER COAX_10;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_1;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_2;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_3;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_4;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_5;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_6;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_7;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_8;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_9;
        static SIGNED_LONG_INTEGER ANALOGAUDIO_10;
        static SIGNED_LONG_INTEGER USB_1;
        static SIGNED_LONG_INTEGER USB_2;
        static SIGNED_LONG_INTEGER USB_3;
        static SIGNED_LONG_INTEGER USB_4;
        static SIGNED_LONG_INTEGER USB_5;
        static SIGNED_LONG_INTEGER Bd1;
        static SIGNED_LONG_INTEGER Catv1;
        static SIGNED_LONG_INTEGER Game1;
        static SIGNED_LONG_INTEGER Pc1;
        static SIGNED_LONG_INTEGER Bluetooth1;
        static SIGNED_LONG_INTEGER MediaPlayer1;
        static SIGNED_LONG_INTEGER Ipod1;
        static SIGNED_LONG_INTEGER Input11;
        static SIGNED_LONG_INTEGER Input12;
        static SIGNED_LONG_INTEGER Input13;
        static SIGNED_LONG_INTEGER Input14;
        static SIGNED_LONG_INTEGER Input15;
        static SIGNED_LONG_INTEGER Input16;
        static SIGNED_LONG_INTEGER Input17;
        static SIGNED_LONG_INTEGER Input18;
        static SIGNED_LONG_INTEGER Input19;
        static SIGNED_LONG_INTEGER Input20;
        static SIGNED_LONG_INTEGER Input21;
        static SIGNED_LONG_INTEGER Input22;
        static SIGNED_LONG_INTEGER Input23;
        static SIGNED_LONG_INTEGER Input24;
        static SIGNED_LONG_INTEGER Input25;
        static SIGNED_LONG_INTEGER Input26;
        static SIGNED_LONG_INTEGER Input27;
        static SIGNED_LONG_INTEGER Input28;
        static SIGNED_LONG_INTEGER Input29;
        static SIGNED_LONG_INTEGER Input30;
        static SIGNED_LONG_INTEGER Input31;
        static SIGNED_LONG_INTEGER Input32;
        static SIGNED_LONG_INTEGER Input33;
        static SIGNED_LONG_INTEGER Input34;
        static SIGNED_LONG_INTEGER Input35;
        static SIGNED_LONG_INTEGER Input36;
        static SIGNED_LONG_INTEGER Input37;
        static SIGNED_LONG_INTEGER Input38;
        static SIGNED_LONG_INTEGER Input39;
        static SIGNED_LONG_INTEGER Input40;
        static SIGNED_LONG_INTEGER Input41;
        static SIGNED_LONG_INTEGER Input42;
        static SIGNED_LONG_INTEGER Input43;
        static SIGNED_LONG_INTEGER Input44;
        static SIGNED_LONG_INTEGER Input45;
        static SIGNED_LONG_INTEGER Input46;
        static SIGNED_LONG_INTEGER Input47;
        static SIGNED_LONG_INTEGER Input48;
        static SIGNED_LONG_INTEGER Input49;
        static SIGNED_LONG_INTEGER Input50;
    };

     class StandardCommand 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING StandardCommandString[];
        STRING Description[];
    };

    static class StandardCommands 
    {
        // class delegates

        // class events

        // class functions
        static FUNCTION PrintDictionary ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace Crestron.RAD.Common;
        // class declarations
         class AuthenticationJsonConverter;
         class AuthenticationNode;
         class AuthenticationTypes;
         class NoAuthentication;
         class UsernamePasswordAuthentication;
         class DeviceSupportConverter;
         class StandardCommandConverter;
         class AlarmState;
         class ArtworkModeData;
         class AudioInOut;
         class AudioInput;
         class AudioInputDetail;
         class AudioOutput;
         class AudioOutputDetail;
         class AudioToneDetail;
         class Authentication;
         class Authentication2;
         class ZoneConnectionsNode;
         class ChannelSequenceConfig;
         class CommandAckNak;
         class Communication;
         class CrestronDataStoreWrapper;
         class CustomCommand;
         class CustomState;
         class Parameters;
         class PadDirections;
         class Types;
         class Commands;
         class ACommunication;
         class AudioInputDetailConverter;
         class AudioOutputDetailConverter;
         class ConnectionsNode;
         class DatACommunicationJsonConverter;
         class DatFileAudioVideoExtender;
         class DatFileAudioVideoSwitcher;
         class DatFileConfigurationData;
         class DatFileFeature;
         class DatFileInput;
         class DatFileMultiPowerOff;
         class DatFileRootObject;
         class DatFileZone;
         class EmptyCommunication;
         class ModelFileRootObject;
         class VideoAudioInputNode;
         class VideoAudioOutputNode;
         class VideoInputDetailConverter;
         class VideoOutputDetailConverter;
         class DeveloperInformation;
         class DynamicFeature;
         class ExtensionDeviceData;
         class GeneralInformation;
         class InputDetail;
         class MediaService;
         class MediaServiceProviderData;
         class MediaServiceData;
         class SupportedFeature;
         class Feedback;
         class ActiveFeedback;
         class PlaybackStateFeedback;
         class MediaServiceSupportedFeature;
         class PowerWaitPeriod;
         class Resource;
         class ResourceExtensionMethods;
         class SerialDefaults;
         class EthernetDefaults;
         class SupportedCommand;
         class SurroundProfile;
         class SwitchConnection;
         class UserAttribute;
         class UserAttributeData;
         class UserAttributeListEventArgs;
         class DisplayMode;
         class VideoConfigurationData;
         class VideoInOut;
         class VideoInputDetail;
         class VideoOutput;
         class VideoOutputDetail;
         class VolumeDetail;
         class ADevicePreset;
         class ADeviceProperty;
         class SimplVirtualDriver;
         class VirtualDriver;
         class SimplVirtualDriverCapabilityModule;
     class AuthenticationJsonConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class AuthenticationNode 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Type[];
    };

    static class AuthenticationTypes 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static STRING NONE[];
        static STRING USERNAME_PASSWORD[];

        // class properties
    };

     class NoAuthentication 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Type[];
    };

     class UsernamePasswordAuthentication 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Type[];
        STRING UsernameMask[];
        STRING PasswordMask[];
        STRING DefaultUsername[];
        STRING DefaultPassword[];
    };

     class DeviceSupportConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class StandardCommandConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class AlarmState 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        Crestron.RAD.Common.Enums.StateType Burglary;
        Crestron.RAD.Common.Enums.StateType Fire;
        Crestron.RAD.Common.Enums.StateType Medical;
        Crestron.RAD.Common.Enums.StateType Tamper;

        // class properties
    };

     class ArtworkModeData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ArtworkModeOnCommand[];
        STRING ArtworkModeOffCommand[];
    };

     class AudioInOut 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class AudioInput 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AudioConnections InputType;
        AudioConnectionTypes InputConnector;
        STRING Description[];
    };

     class AudioInputDetail 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AudioConnections type;
        STRING description[];
        AudioConnectionTypes connector;
        STRING friendlyName[];
    };

     class AudioOutput 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AudioConnections OutputType;
        AudioConnectionTypes OutputConnector;
        STRING Description[];
    };

     class AudioOutputDetail 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        AudioConnections type;
        STRING description[];
        AudioConnectionTypes connector;
        STRING friendlyName[];
    };

     class ZoneConnectionsNode 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        Crestron.RAD.Common.VideoAudioInputNode inputs;
        Crestron.RAD.Common.VideoAudioOutputNode outputs;

        // class properties
    };

     class ChannelSequenceConfig 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        LONG_INTEGER MinimumNumberOfDigits;
        LONG_INTEGER DelayBetweenCommands;
        LONG_INTEGER DelayBetweenSequences;
        LONG_INTEGER IRCommandDuration;
    };

     class CommandAckNak 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Ack[];
        STRING Nak[];
    };

     class Communication 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CommunicationType CommunicationType;
        eComProtocolType Protocol;
        eComBaudRates Baud;
        eComParityType Parity;
        eComHardwareHandshakeType HwHandshake;
        eComSoftwareHandshakeType SwHandshake;
        eComDataBits DataBits;
        eComStopBits StopBits;
        SIGNED_LONG_INTEGER Port;
        LONG_INTEGER TimeBetweenCommands;
        LONG_INTEGER ResponseTimeout;
        ethernetProtocol IpProtocol;
        AuthenticationNode Authentication;
        SIGNED_LONG_INTEGER DeviceId;
    };

     class CrestronDataStoreWrapper 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class CustomCommand 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Name[];
        STRING Command[];
    };

     class CustomState 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class Parameters 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        Crestron.RAD.Common.Parameters Type;
        STRING PadCharacter[];
        Crestron.RAD.Common.Parameters PadDirection;

        // class properties
        STRING Id[];
        SIGNED_INTEGER Max;
        SIGNED_INTEGER Min;
        SIGNED_INTEGER StaticDataWidth;
        STRING value[];
    };

    static class PadDirections // enum
    {
        static SIGNED_LONG_INTEGER Left;
        static SIGNED_LONG_INTEGER Right;
    };

    static class Types // enum
    {
        static SIGNED_LONG_INTEGER String;
        static SIGNED_LONG_INTEGER AsciiToHex;
        static SIGNED_LONG_INTEGER DecimalToHex;
        static SIGNED_LONG_INTEGER HexString;
    };

     class Commands 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        StandardCommandsEnum StandardCommand;
        STRING Command[];
    };

     class ACommunication 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING Type[];
        Crestron.RAD.Common.AuthenticationNode authentication;

        // class properties
    };

     class AudioInputDetailConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class AudioOutputDetailConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class ConnectionsNode 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        Crestron.RAD.Common.VideoAudioInputNode inputs;
        Crestron.RAD.Common.VideoAudioOutputNode outputs;

        // class properties
    };

     class DatACommunicationJsonConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class DatFileAudioVideoExtender 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING id[];
        STRING friendlyName[];
        Crestron.RAD.Common.Enums.AudioVideoExtenderType type;
        STRING manufacturer[];
        STRING model[];
        Crestron.RAD.Common.ConnectionsNode connections;

        // class properties
    };

     class DatFileAudioVideoSwitcher 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        SIGNED_LONG_INTEGER msBetweenRouteCommands;

        // class properties
    };

     class DatFileConfigurationData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class DatFileFeature 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING displayName[];
        STRING id[];

        // class properties
    };

     class DatFileInput 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING inputDescription[];
        STRING inputConnector[];
        STRING inputType[];
        SIGNED_LONG_INTEGER index;

        // class properties
    };

     class DatFileMultiPowerOff 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class DatFileRootObject 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING manufacturer[];
        STRING driverId[];
        Crestron.RAD.Common.PowerWaitPeriod power;
        STRING deviceType[];
        Crestron.RAD.Common.Enums.DeviceTypes deviceTypeId;
        STRING sdkVersion[];
        STRING driverVersion[];
        STRING description[];
        STRING baseModel[];
        Crestron.RAD.Common.ACommunication communication;
        STRING driverVersionDate[];
        Crestron.RAD.Common.DatFileConfigurationData configuration;
        Crestron.RAD.Common.ConnectionsNode connections;
        Crestron.RAD.Common.DatFileMultiPowerOff multiPowerOff;
        Crestron.RAD.Common.MediaServiceProviderData mediaServiceProviders;
        Crestron.RAD.Common.ArtworkModeData artworkMode;
        Crestron.RAD.Common.VideoConfigurationData videoConfigurations;
        Crestron.RAD.Common.DatFileAudioVideoSwitcher audioVideoSwitcher;
        Crestron.RAD.Common.ExtensionDeviceData extensionDeviceData;
        STRING developer[];
        Crestron.RAD.Common.DeveloperInformation developerContact;
        STRING dependencyGroup[];
        STRING driverSchemaVersion[];

        // class properties
        STRING assemblyFileName[];
        STRING className[];
    };

     class DatFileZone 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING zoneId[];
        STRING zoneFriendlyName[];
        Crestron.RAD.Common.ZoneConnectionsNode zoneConnections;

        // class properties
    };

     class EmptyCommunication 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING Type[];
        Crestron.RAD.Common.AuthenticationNode authentication;

        // class properties
    };

     class ModelFileRootObject 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING description[];
        STRING basefile[];
        ConnectionsNode connections;
        STRING manufacturer[];
        PowerWaitPeriod power;
        STRING driverID[];
    };

     class VideoAudioInputNode 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VideoAudioOutputNode 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VideoInputDetailConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VideoOutputDetailConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class DeveloperInformation 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Company[];
        STRING Contact[];
        STRING Email[];
        STRING Website[];
        STRING PhoneNumber[];
    };

     class DynamicFeature 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING Name[];
        STRING Value[];

        // class properties
    };

     class ExtensionDeviceData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class GeneralInformation 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING DependencyGroup[];

        // class properties
        STRING DeviceType[];
        STRING Manufacturer[];
        STRING BaseModel[];
        STRING DriverVersion[];
        STRING SdkVersion[];
        STRING Description[];
        ExtensionDeviceData ExtensionDeviceData;
        DeveloperInformation Developer;
    };

     class InputDetail 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        VideoConnections InputType;
        VideoConnectionTypes InputConnector;
        STRING Description[];
    };

     class MediaService 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        STRING FriendlyName[];
        MediaServiceStates State;
        MediaServiceSubscriptionStates SubscriptionStatus;
    };

     class MediaServiceProviderData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        Feedback FeedbackData;
        STRING MediaServicePollCommand[];
        STRING MediaServiceSubscriptionStatePollCommand[];
        STRING MediaServicePlaybackStatePollCommand[];
    };

     class MediaServiceData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        STRING FriendlyName[];
        STRING Command[];
    };

     class SupportedFeature 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ComponentInterface[];
    };

     class Feedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
        ActiveFeedback ActiveServiceFeedbackData;
        PlaybackStateFeedback PlaybackStateFeedbackData;
    };

     class ActiveFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class PlaybackStateFeedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING GroupHeader[];
    };

     class MediaServiceSupportedFeature 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PowerWaitPeriod 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        LONG_INTEGER WarmUpTime;
        LONG_INTEGER CoolDownTime;
    };

     class Resource 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        Crestron.RAD.Common.Enums.SecuritySystemResourceType Type;
        STRING Parent[];
        STRING Name[];
        SIGNED_LONG_INTEGER Index;
        Crestron.RAD.Common.Enums.ArmedState ArmedState;
        Crestron.RAD.Common.AlarmState AlarmState;
        Crestron.RAD.Common.Enums.BatteryState BatteryState;
        Crestron.RAD.Common.Enums.ErrorState ErrorState;
        Crestron.RAD.Common.Enums.LockState LockState;
        Crestron.RAD.Common.Enums.BypassedState BypassedState;

        // class properties
    };

    static class ResourceExtensionMethods 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class SerialDefaults 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        eComProtocolType ProtocolType;
        eComBaudRates BaudType;
        eComParityType ParityType;
        eComHardwareHandshakeType HardwareHandshakeType;
        eComSoftwareHandshakeType SoftwareHandshakeType;
        eComDataBits DataBitsType;
        eComStopBits StopBitsType;
    };

     class EthernetDefaults 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        ethernetProtocol EthernetProtocol;
    };

     class SurroundProfile 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        Crestron.RAD.Common.Enums.SurroundModeType ProfileEnum;
        STRING SurroundProfileName[];

        // class properties
    };

     class SwitchConnection 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        InputDetail InputType;
        Direction Direction;
    };

     class UserAttribute 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING TypeName[];
        STRING ParameterId[];
        STRING Label[];
        STRING Description[];
        STRING RequiredForConnection[];
        UserAttributeData Data;
    };

     class UserAttributeData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING DataType[];
        STRING Mask[];
        STRING DefaultValue[];
        STRING DefaultValueLabel[];
    };

     class DisplayMode 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        STRING FriendlyName[];
        STRING Command[];
    };

     class VideoConfigurationData 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VideoInOut 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class VideoInputDetail 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        VideoConnections type;
        STRING description[];
        VideoConnectionTypes connector;
        STRING friendlyName[];
    };

     class VideoOutput 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        VideoConnections OutputType;
        VideoConnectionTypes OutputConnector;
        STRING Description[];
    };

     class VideoOutputDetail 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        VideoConnections type;
        STRING description[];
        VideoConnectionTypes connector;
        STRING friendlyName[];
    };

     class ADevicePreset 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        STRING Name[];
    };

     class ADeviceProperty 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Key[];
        SIGNED_LONG_INTEGER LocalizedNameId;
        DevicePropertyAttributes Attributes;
        DevicePropertyType Type;
        DevicePropertyUnit Units;
        DevicePropertyRenderHint RenderHint;
        STRING ParentPropertyKey[];
        DevicePropertyStates State;
    };

     class SimplVirtualDriver 
    {
        // class delegates
        delegate FUNCTION RegistrationUpdateCallback ( INTEGER registered , SIMPLSHARPSTRING status );

        // class events

        // class functions
        FUNCTION Initialize ( STRING uniqueId , STRING deviceType , STRING transportType );
        FUNCTION RegisterWithCloud ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty RegistrationUpdateCallback RegistrationUpdated;
    };

     class SimplVirtualDriverCapabilityModule 
    {
        // class delegates
        delegate FUNCTION UshortOutputDelegate ( SIMPLSHARPSTRING signalName , INTEGER value );
        delegate FUNCTION AnalogArrayOutputDelegate ( SIMPLSHARPSTRING signalName , INTEGER simplIndex , INTEGER value );
        delegate FUNCTION StringOutputDelegate ( SIMPLSHARPSTRING signalName , SIMPLSHARPSTRING value );

        // class events

        // class functions
        FUNCTION Initialize ( STRING parentId , STRING childId , STRING capabilityName );
        FUNCTION SetAnalogArrayProperty ( STRING methodName , INTEGER simplIndex , INTEGER value );
        FUNCTION SetAnalogProperty ( STRING propertyName , INTEGER value );
        FUNCTION SetArrayIndex ( STRING methodName , INTEGER simplIndex );
        FUNCTION SetDateTimeProperty ( STRING propertyName , STRING value );
        FUNCTION SetDigitalArrayProperty ( STRING methodName , INTEGER simplIndex , INTEGER value );
        FUNCTION SetDigitalProperty ( STRING propertyName , INTEGER value );
        FUNCTION SetStringArrayProperty ( STRING method , INTEGER simplIndex , STRING value );
        FUNCTION SetStringArrayWithIndexProperty ( STRING methodName , INTEGER simplIndex , INTEGER innerIndex , STRING value );
        FUNCTION SetStringProperty ( STRING propertyName , STRING value );
        FUNCTION SetStringStringArrayProperty ( STRING methodName , INTEGER simplIndex , STRING value1 , STRING value2 );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty UshortOutputDelegate AnalogOutputUpdated;
        DelegateProperty AnalogArrayOutputDelegate DigitalArrayOutputUpdated;
        DelegateProperty UshortOutputDelegate DigitalOutputUpdated;
        DelegateProperty StringOutputDelegate StringOutputUpdated;
    };

namespace Crestron.RAD.Common.BasicDriver;
        // class declarations
         class ABasicDriver;
         class ConsoleCommandType;
         class ABaseDriverProtocol;
         class BaseRootObject;
         class CrestronSerialDeviceApi;
         class Api;
         class Feedback;
         class PowerState;
         class ABasicIrDriver;
         class IrButton;
         class IrCommand;
         class CommandSet;
         class CommandPriority;
         class DriverClock;
         class ScalingInformation;
         class TimelineEventHandler;
         class ValidatedRxData;
         class Tcp2Capability;
     class ABasicDriver 
    {
        // class delegates

        // class events
        EventHandler UserAttributesChanged ( ABasicDriver sender, UserAttributeListEventArgs e );
        EventHandler IsRegisteredWithCloudChanged ( ABasicDriver sender, CloudRegistrationEventArgs e );

        // class functions
        FUNCTION Reconnect ();
        FUNCTION Connect ();
        FUNCTION OverrideUsername ( STRING username );
        FUNCTION OverridePassword ( STRING password );
        FUNCTION SetUserAttribute ( STRING attributeId , STRING attributeValue );
        FUNCTION LoadModelFile ( STRING filePath );
        FUNCTION SendCustomCommandByName ( STRING commandName , CommandAction action );
        FUNCTION RegisterWithCloud ( STRING uniqueId );
        FUNCTION ConvertJsonFileToDriverData ( STRING jsonString );
        static SIGNED_LONG_INTEGER_FUNCTION CreateNewDriverId ();
        static FUNCTION InitializeCCDCommands ();
        FUNCTION Initialize ( BaseRootObject driverData );
        FUNCTION SendCustomCommand ( STRING command );
        FUNCTION SendCustomCommandValue ( STRING commandValue );
        FUNCTION Dispose ();
        FUNCTION Disconnect ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Port;
        ComPortSpec ComSpec;
        STRING Description[];
        STRING Manufacturer[];
        STRING BaseModel[];
        STRING DriverVersion[];
        STRING UsernameMask[];
        STRING UsernameKey[];
        STRING PasswordMask[];
        STRING PasswordKey[];
        STRING DefaultUsername[];
        STRING DefaultPassword[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING DriverPath[];
    };

    static class ConsoleCommandType // enum
    {
        static SIGNED_LONG_INTEGER RADInfo;
        static SIGNED_LONG_INTEGER TxDebug;
        static SIGNED_LONG_INTEGER RxDebug;
        static SIGNED_LONG_INTEGER StackTrace;
        static SIGNED_LONG_INTEGER General;
        static SIGNED_LONG_INTEGER LoggingLevel;
        static SIGNED_LONG_INTEGER DriverStates;
        static SIGNED_LONG_INTEGER CloudRegistration;
    };

     class BaseRootObject 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CrestronSerialDeviceApi CrestronSerialDeviceApi;
    };

     class CrestronSerialDeviceApi 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        GeneralInformation GeneralInformation;
        Api Api;
    };

     class Api 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        Communication Communication;
        PowerWaitPeriod PowerWaitPeriod;
        Feedback Feedback;
        MediaServiceProviderData MediaServiceProviders;
    };

     class Feedback 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CommandAckNak CommandAckNak;
        STRING Header[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING ConnectedStatePollCommand[];
    };

    static class PowerState // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER On;
        static SIGNED_LONG_INTEGER Off;
        static SIGNED_LONG_INTEGER WarmingUp;
        static SIGNED_LONG_INTEGER CoolingDown;
    };

     class ABasicIrDriver 
    {
        // class delegates

        // class events
        EventHandler UserAttributesChanged ( ABasicIrDriver sender, UserAttributeListEventArgs e );
        EventHandler IsRegisteredWithCloudChanged ( ABasicIrDriver sender, CloudRegistrationEventArgs e );

        // class functions
        FUNCTION SendCustomCommandByName ( STRING commandName );
        FUNCTION SendCustomCommandValue ( STRING commandValue );
        FUNCTION Dispose ();
        FUNCTION PowerOn ( IrActions action );
        FUNCTION PowerOff ( IrActions action );
        FUNCTION PowerToggle ( IrActions action );
        FUNCTION SetVideoOutputSource ( VideoConnections input );
        FUNCTION SetAudioOutputSource ( AudioConnections input );
        FUNCTION SetVideoInputSource ( VideoConnections input );
        FUNCTION SetAudioInputSource ( AudioConnections input );
        FUNCTION Initialize ( STRING fileLocation );
        FUNCTION TriggerCommand ( STRING commandName , IrActions action , INTEGER pulseLength );
        FUNCTION Disconnect ();
        FUNCTION Reconnect ();
        FUNCTION Connect ();
        FUNCTION SendCustomCommand ( STRING command );
        FUNCTION OverrideUsername ( STRING username );
        FUNCTION OverridePassword ( STRING password );
        FUNCTION SetUserAttribute ( STRING attributeId , STRING attributeValue );
        FUNCTION LoadModelFile ( STRING filePath );
        FUNCTION RegisterWithCloud ( STRING uniqueId );
        FUNCTION ConvertJsonFileToDriverData ( STRING jsonString );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ObjectName[];
        LONG_INTEGER WarmUpTime;
        LONG_INTEGER CoolDownTime;
        VideoOutputDetail VideoOutputSource;
        AudioOutputDetail AudioOutputSource;
        VideoInputDetail VideoInputSource;
        AudioInputDetail AudioInputSource;
        SIGNED_LONG_INTEGER Port;
        ComPortSpec ComSpec;
        STRING Description[];
        STRING Manufacturer[];
        STRING BaseModel[];
        STRING DriverVersion[];
        STRING UsernameMask[];
        STRING UsernameKey[];
        STRING PasswordMask[];
        STRING PasswordKey[];
        STRING DefaultUsername[];
        STRING DefaultPassword[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING DriverPath[];
    };

    static class CommandPriority // enum
    {
        static SIGNED_LONG_INTEGER Special;
        static SIGNED_LONG_INTEGER Highest;
        static SIGNED_LONG_INTEGER High;
        static SIGNED_LONG_INTEGER Normal;
        static SIGNED_LONG_INTEGER Low;
        static SIGNED_LONG_INTEGER Lowest;
    };

    static class DriverClock 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class ScalingInformation 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class TimelineEventHandler 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Start ( SIGNED_LONG_INTEGER dueAt );
        FUNCTION Stop ();
        FUNCTION HandleTimelineEvent ( SIGNED_LONG_INTEGER currentTick );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER DueAt;
        SIGNED_LONG_INTEGER EventInterval;
    };

namespace Crestron.RAD.DeviceTypes.SecuritySystem;
        // class declarations
         class SecuritySystemAlarm;
         class SecuritySystemAreaCommand;
         class SecuritySystemKeypadFunctionButton;
         class SecuritySystemKeypadIndicatorState;
         class SecuritySystemKeypadLed;
         class SecuritySystemOperationalResult;
         class SecuritySystemCommandResultEventArgs;
         class SecuritySystemKeypadIndicatorChangedEventArgs;
         class SecuritySystemKeypadTextChangedEventArgs;
     class SecuritySystemKeypadIndicatorState 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        SIGNED_LONG_INTEGER Index;
        Crestron.RAD.Common.Enums.SecuritySystemKeypadIndicatorStateType State;

        // class properties
    };

     class SecuritySystemCommandResultEventArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        Crestron.RAD.DeviceTypes.SecuritySystem.SecuritySystemOperationalResult CommandResult;

        // class properties
    };

     class SecuritySystemKeypadIndicatorChangedEventArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        Crestron.RAD.DeviceTypes.SecuritySystem.SecuritySystemKeypadIndicatorState IndicatorState;

        // class properties
    };

     class SecuritySystemKeypadTextChangedEventArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING KeypadText[];

        // class properties
    };

namespace Crestron.RAD.DeviceTypes.ExtensionDevice;
        // class declarations
         class AExtensionDevice;
         class ClassDefinition;
         class ExtensionDeviceRootObject;
         class OperationResult;
         class PropertyAvailableValue;
         class PropertyDefinition;
         class PropertyValue;
         class ObjectValue;
         class ObjectList;
     class AExtensionDevice 
    {
        // class delegates

        // class events
        EventHandler UserAttributesChanged ( AExtensionDevice sender, UserAttributeListEventArgs e );
        EventHandler IsRegisteredWithCloudChanged ( AExtensionDevice sender, CloudRegistrationEventArgs e );

        // class functions
        FUNCTION ConvertJsonFileToDriverData ( STRING jsonString );
        FUNCTION Reconnect ();
        FUNCTION Connect ();
        FUNCTION OverrideUsername ( STRING username );
        FUNCTION OverridePassword ( STRING password );
        FUNCTION SetUserAttribute ( STRING attributeId , STRING attributeValue );
        FUNCTION LoadModelFile ( STRING filePath );
        FUNCTION SendCustomCommandByName ( STRING commandName , CommandAction action );
        FUNCTION RegisterWithCloud ( STRING uniqueId );
        FUNCTION Initialize ( BaseRootObject driverData );
        FUNCTION SendCustomCommand ( STRING command );
        FUNCTION SendCustomCommandValue ( STRING commandValue );
        FUNCTION Dispose ();
        FUNCTION Disconnect ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static STRING JsonFileExtension[];
        static STRING ProgrammingFolderName[];
        static STRING ProgrammingFileName[];

        // class properties
        SIGNED_LONG_INTEGER Port;
        ComPortSpec ComSpec;
        STRING Description[];
        STRING Manufacturer[];
        STRING BaseModel[];
        STRING DriverVersion[];
        STRING UsernameMask[];
        STRING UsernameKey[];
        STRING PasswordMask[];
        STRING PasswordKey[];
        STRING DefaultUsername[];
        STRING DefaultPassword[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING DriverPath[];
    };

     class ClassDefinition 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION AddProperty ( PropertyDefinition property );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ClassName[];
    };

     class ExtensionDeviceRootObject 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CrestronSerialDeviceApi CrestronSerialDeviceApi;
    };

     class PropertyAvailableValue 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Label[];
        STRING LabelLocalizationKey[];
    };

     class PropertyValue 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Id[];
        STRING DefinitionKey[];
        DevicePropertyType Type;
    };

     class ObjectValue 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION SetObjectValue ( STRING propertyKey , ObjectValue value );
        FUNCTION SetListValue ( STRING propertyKey , ObjectList value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING SubType[];
        STRING Id[];
        STRING DefinitionKey[];
        DevicePropertyType Type;
    };

     class ObjectList 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION AddObject ( ObjectValue objectValueToAdd );
        FUNCTION RemoveObject ( STRING objectId );
        FUNCTION Clear ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING SubType[];
        STRING Id[];
        STRING DefinitionKey[];
        DevicePropertyType Type;
    };

namespace RADCommon.Devices.SecuritySystem;
        // class declarations
         class SimplSecuritySystem;
         class SimplSecurityZoneModule;
           class DriverAuthenticationSupportsDelegate;
           class DriverAuthenticationUpdateDelegate;
           class TxUpdatedDelegate;
           class PacketTxUpdatedDelegate;
           class LogDelegate;
           class RxOutDelegate;
           class BasicConnectionSupportsDelegate;
           class CustomIrCommandSupportsDelegate;
           class DriverLoadedDelegate;
           class DriverCustomCommandDelegate;
           class DriverCloudStatusDelegate;
     class SimplSecuritySystem 
    {
        // class delegates
        delegate FUNCTION SecurityCommandErrorCodeUpdated ( SecuritySystemOperationalResultCode result , SIGNED_LONG_INTEGER area );
        delegate FUNCTION SecuritySystemConfigurationUpdated ( );
        delegate FUNCTION KeypadStatusTextUpdated ( SIMPLSHARPSTRING keypadText );
        delegate FUNCTION AreaActiveAlarmsUpdated ( INTEGER areaIndex );
        delegate FUNCTION AreaActiveStateUpdated ( INTEGER areaIndex );
        delegate FUNCTION SystemStateUpdated ( );
        delegate FUNCTION SystemAlarmsUpdated ( );
        delegate FUNCTION KeypadLedStatusUpdated ( INTEGER ledIndex , INTEGER ledState );
        delegate FUNCTION AreaListUpdated ( );
        delegate FUNCTION KeypadSupportsDelegate ( INTEGER keypadNumber , INTEGER keypadPound , INTEGER keypadAsterisk , INTEGER keypadBackSpace , INTEGER dash , INTEGER period , INTEGER enter );
        delegate FUNCTION NavigationSupportsDelegate ( INTEGER arrowKeys , INTEGER clear , INTEGER exit , INTEGER home , INTEGER menu , INTEGER select , INTEGER search );
        delegate FUNCTION AreaCommandSupportsDelegate ( INTEGER armedAway , INTEGER armedStay , INTEGER armedAwayInstant , INTEGER armedStayInstant );
        delegate FUNCTION ConnectionStatusUpdated ( INTEGER state );
        delegate FUNCTION KeypadSupportsDelegate2 ( INTEGER supportsKeypadLine1 , INTEGER supportsKeypadLine2 );
        delegate FUNCTION KeypadStatusDelegate2 ( SIMPLSHARPSTRING keypadTextLine1 , SIMPLSHARPSTRING keypadTextLine2 );
        delegate FUNCTION FunctionButtonSupportsDelegate2 ( INTEGER supportsButton1 , INTEGER supportsButton2 , INTEGER supportsButton3 , INTEGER supportsButton4 , INTEGER supportsButton5 , INTEGER supportsButton6 , INTEGER supportsButton7 , INTEGER supportsButton8 );
        delegate FUNCTION FunctionButtonTextDelegate2 ( INTEGER index , SIMPLSHARPSTRING buttonText );
        delegate FUNCTION AreaCommandSupportsDelegate2 ( INTEGER supportsForceArmedAway , INTEGER supportsForceArmedStay );
        delegate FUNCTION AreaAlarmStateUpdated2 ( INTEGER areaIndex );
        delegate FUNCTION KeypadLedSupportsUpdated ( INTEGER supportsLed1 , INTEGER supportsLed2 , INTEGER supportsLed3 , INTEGER supportsLed4 , INTEGER supportsLed5 );
        delegate FUNCTION KeypadLedLabelUpdated ( INTEGER ledIndex , SIMPLSHARPSTRING ledLabel );
        delegate FUNCTION RxOutDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION BasicInformationDelegate ( SIMPLSHARPSTRING sdkVersion , SIMPLSHARPSTRING manufacturer , SIMPLSHARPSTRING baseModel , SIMPLSHARPSTRING supportedModels , SIMPLSHARPSTRING supportedSeries , SIMPLSHARPSTRING description , SIMPLSHARPSTRING driverVersion , SIMPLSHARPSTRING driverVersionDate , SIMPLSHARPSTRING guid , INTEGER supportsFeedback );
        delegate FUNCTION BasicConnectionSupportsDelegate ( INTEGER disconnect , INTEGER reconnect );
        delegate FUNCTION TxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION PacketTxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION DriverLoadedDelegate ( INTEGER loaded , INTEGER port , INTEGER rebootRequired );
        delegate FUNCTION DriverAuthenticationSupportsDelegate ( INTEGER supportsUsername , INTEGER supportsPassword , INTEGER isRequired );
        delegate FUNCTION DriverAuthenticationUpdateDelegate ( INTEGER authStatus );
        delegate FUNCTION DriverCustomCommandDelegate ( );
        delegate FUNCTION LogDelegate ( SIMPLSHARPSTRING logMessage );
        delegate FUNCTION CustomIrCommandSupportsDelegate ( );
        delegate FUNCTION DriverCloudStatusDelegate ( INTEGER registrationStatus , SIMPLSHARPSTRING registrationError );

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION SimplGetAreaCount ();
        SIGNED_LONG_INTEGER_FUNCTION SimplGetNumLeds ();
        SIGNED_LONG_INTEGER_FUNCTION SimplGetNumFunctionButtons ();
        SIMPLSHARPSTRING_FUNCTION SimplGetAreaName ( INTEGER areaIndex );
        SIGNED_LONG_INTEGER_FUNCTION IsAreaDisarmed ( INTEGER areaIndex );
        SIGNED_LONG_INTEGER_FUNCTION IsAreaArmedAway ( INTEGER areaIndex );
        SIGNED_LONG_INTEGER_FUNCTION IsAreaArmedStay ( INTEGER areaIndex );
        SIGNED_LONG_INTEGER_FUNCTION IsAreaInAlarm ( INTEGER areaIndex );
        SIGNED_LONG_INTEGER_FUNCTION IsSystemDisarmed ();
        SIGNED_LONG_INTEGER_FUNCTION IsSystemArmedAway ();
        SIGNED_LONG_INTEGER_FUNCTION IsSystemArmedStay ();
        SIGNED_LONG_INTEGER_FUNCTION IsSystemInAlarm ();
        SIGNED_LONG_INTEGER_FUNCTION SimplGetAreaAlarmState ( INTEGER areaIndex );
        SIGNED_LONG_INTEGER_FUNCTION SimplAreaContainsAlarm ( INTEGER areaIndex , INTEGER alarmType );
        FUNCTION SimplSendAreaCommand ( INTEGER type , INTEGER area );
        FUNCTION SimplSendCommandToAllAreas ( INTEGER type );
        FUNCTION SimplFunctionButton ( SIGNED_LONG_INTEGER buttonId );
        FUNCTION SimplArrowKey ( STRING direction );
        FUNCTION SimplKeypadNumber ( INTEGER number );
        FUNCTION SimplKeypadString ( STRING keys );
        FUNCTION SimplKeypadAsterisk ();
        FUNCTION SimplKeypadPound ();
        FUNCTION SimplKeypadEnter ();
        FUNCTION SimplKeypadPeriod ();
        FUNCTION SimplKeypadDash ();
        FUNCTION SimplKeypadBackspace ();
        FUNCTION SimplKeypadSelect ();
        FUNCTION SimplKeypadClear ();
        FUNCTION SimplKeypadHome ();
        FUNCTION SimplKeypadMenu ();
        FUNCTION SimplKeypadExit ();
        FUNCTION Initialize ( STRING filename , SIGNED_LONG_INTEGER id , STRING ipAddress , SIGNED_LONG_INTEGER port );
        FUNCTION Initialize2 ( STRING filename , SIGNED_LONG_INTEGER id , STRING ipAddress , SIGNED_LONG_INTEGER port , SIGNED_LONG_INTEGER enableLogging );
        FUNCTION Initialize3 ( STRING filename , SIGNED_LONG_INTEGER id , STRING ipAddress , SIGNED_LONG_INTEGER port , SIGNED_LONG_INTEGER enableLogging , SIGNED_LONG_INTEGER ethernetAdapterType );
        FUNCTION Initialize4 ( STRING filename , SIGNED_LONG_INTEGER id , STRING ipAddress , SIGNED_LONG_INTEGER port , SIGNED_LONG_INTEGER enableLogging , SIGNED_LONG_INTEGER ethernetAdapterType , SIGNED_LONG_INTEGER useDefaultDirectory );
        FUNCTION RegisterMainModule ( STRING mainModuleId );
        FUNCTION SimplOverridePassword ( STRING password );
        STRING_FUNCTION SimplSetComportSpec ( INTEGER comPort );
        FUNCTION ReceiveData ( STRING message );
        FUNCTION SimplEnableLogging ();
        FUNCTION SimplDisableLogging ();
        FUNCTION SimplEnableTxDebug ();
        FUNCTION SimplDisableTxDebug ();
        FUNCTION SimplEnableRxDebug ();
        FUNCTION SimplDisableRxDebug ();
        FUNCTION SimplDisconnect ();
        FUNCTION SimplReconnect ();
        FUNCTION SimplConnect ();
        FUNCTION SimplEnableRxOut ();
        FUNCTION SimplDisableRxOut ();
        FUNCTION SimplSendCustomCommand ( STRING message );
        FUNCTION SimplSendCustomCommandByName ( STRING commandName );
        FUNCTION SimplSendCustomCommandByValue ( STRING value );
        FUNCTION SimplTriggerCustomCommand ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandPress ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandRelease ( STRING commandName );
        INTEGER_FUNCTION SimplCustomCommandExists ( STRING commandName );
        FUNCTION SimplCustomCommandPageUp ();
        FUNCTION SimplCustomCommandPageDown ();
        FUNCTION SetDriverCustomCommands ();
        FUNCTION UpdateCustomCommands ( SIMPLSHARPSTRING labels[] , INTEGER curPage );
        FUNCTION SimplSetStringUserAttribute ( INTEGER index , STRING value );
        FUNCTION SimplSetAnalogUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplSetDigitalUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplRegisterWithCloud ( SIMPLSHARPSTRING uniqueId );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER UserAttributeIsAvailable[];
        INTEGER UserAttributeDataTypes[];
        INTEGER UserAttributeTypes[];
        STRING UserAttributeLabels[][];
        INTEGER UserAttributeIsPersistent[];
        INTEGER UserAttributeRequiredForConnection[];
        STRING UserAttributeDescriptions[][];
        SIMPLSHARPSTRING SimplCustomCommandNames[][];
        INTEGER SimplNumPages;
        INTEGER SimplNumCustomCommands;
        INTEGER SimplCurrentPage;

        // class properties
        DelegateProperty SecurityCommandErrorCodeUpdated CommandResultUpdated;
        DelegateProperty SecuritySystemConfigurationUpdated ConfigurationUpdated;
        DelegateProperty KeypadStatusTextUpdated VirtualKeypadStatusTextChanged;
        DelegateProperty AreaActiveAlarmsUpdated AreaAlarmStateChanged;
        DelegateProperty AreaActiveStateUpdated AreaStateChanged;
        DelegateProperty SystemStateUpdated SystemStateChanged;
        DelegateProperty SystemAlarmsUpdated SystemAlarmsChanged;
        DelegateProperty KeypadLedStatusUpdated KeypadLedStatusChanged;
        DelegateProperty AreaListUpdated AreaListChanged;
        DelegateProperty KeypadSupportsDelegate KeypadSupportsUpdated;
        DelegateProperty NavigationSupportsDelegate NavigationSupportsUpdated;
        DelegateProperty AreaCommandSupportsDelegate AreaCommandSupportsUpdated;
        DelegateProperty ConnectionStatusUpdated ConnectionStatusChanged;
        DelegateProperty KeypadSupportsDelegate2 KeypadSupportsChanged2;
        DelegateProperty KeypadStatusDelegate2 KeypadStatusChanged2;
        DelegateProperty FunctionButtonSupportsDelegate2 FunctionButtonSupportsChanged2;
        DelegateProperty FunctionButtonTextDelegate2 FunctionButtonTextChanged2;
        DelegateProperty AreaCommandSupportsDelegate2 AreaCommandSupportsChanged2;
        DelegateProperty AreaAlarmStateUpdated2 AreaAlarmStateChanged2;
        DelegateProperty KeypadLedSupportsUpdated KeypadLedSupportChanged;
        DelegateProperty KeypadLedLabelUpdated KeypadLedLabelChanged;
        INTEGER SimplArrowDirectionsSupported[];
        DelegateProperty RxOutDelegate RxOutDel;
        DelegateProperty BasicInformationDelegate BasicInformationUpdated;
        DelegateProperty BasicConnectionSupportsDelegate BasicConnectionSupportsUpdated;
        DelegateProperty TxUpdatedDelegate TxUpdated;
        DelegateProperty PacketTxUpdatedDelegate PacketTxUpdated;
        DelegateProperty DriverLoadedDelegate DriverLoadedCallback;
        DelegateProperty DriverAuthenticationSupportsDelegate DriverAuthenticationSupportsCallback;
        DelegateProperty DriverAuthenticationUpdateDelegate DriverAuthenticationUpdateCallback;
        DelegateProperty DriverCustomCommandDelegate DriverCustomCommandCallback;
        DelegateProperty TxUpdatedDelegate InternalTxUpdated;
        DelegateProperty PacketTxUpdatedDelegate InternalPacketTxUpdated;
        DelegateProperty LogDelegate InternalLogOut;
        DelegateProperty RxOutDelegate InternalRxOut;
        DelegateProperty BasicConnectionSupportsDelegate InternalBasicConnectionSupportsUpdated;
        DelegateProperty CustomIrCommandSupportsDelegate InternalCustomIrCommandSupportsUpdatead;
        DelegateProperty DriverLoadedDelegate InternalDriverLoadedCallback;
        DelegateProperty DriverAuthenticationSupportsDelegate InternalDriverAuthenticationSupportsCallback;
        DelegateProperty DriverAuthenticationUpdateDelegate InternalDriverAuthenticationUpdateCallback;
        DelegateProperty DriverCustomCommandDelegate InternalDriverCustomCommandCallback;
        DelegateProperty DriverCloudStatusDelegate InternalDriverCloudStatusCallback;
        STRING ApplicationDirectory[];
        STRING InterfaceName[];
    };

     class SimplSecurityZoneModule 
    {
        // class delegates
        delegate FUNCTION ModuleRegistrationUpdate ( INTEGER registered );
        delegate FUNCTION StatesSupportedUpdate ( INTEGER okState , INTEGER bypassedState , INTEGER fautedState , INTEGER missingState , INTEGER lowBatteryState , INTEGER tamperState );
        delegate FUNCTION OkStateUpdate ( INTEGER state );
        delegate FUNCTION BypassedStateUpdate ( INTEGER state );
        delegate FUNCTION FaultedStateUpdate ( INTEGER state );
        delegate FUNCTION MissingStateUpdate ( INTEGER state );
        delegate FUNCTION LowBatteryStateUpdate ( INTEGER state );
        delegate FUNCTION TamperStateUpdate ( INTEGER state );
        delegate FUNCTION FunctionsSupportedUpdate ( INTEGER poll );
        delegate FUNCTION LabelUpdate ( SIMPLSHARPSTRING label );

        // class events

        // class functions
        FUNCTION RegisterZoneModule ( STRING mainModuleId , SIGNED_LONG_INTEGER zoneSystemIndex );
        FUNCTION Poll ();
        FUNCTION Bypass ();
        FUNCTION Unbypass ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty ModuleRegistrationUpdate ModuleRegistrationUpdated;
        DelegateProperty StatesSupportedUpdate StatesSupportedUpdated;
        DelegateProperty OkStateUpdate OkStateUpdated;
        DelegateProperty BypassedStateUpdate BypassedStateUpdated;
        DelegateProperty FaultedStateUpdate FaultedStateUpdated;
        DelegateProperty MissingStateUpdate MissingStateUpdated;
        DelegateProperty LowBatteryStateUpdate LowBatteryStateUpdated;
        DelegateProperty TamperStateUpdate TamperStateUpdated;
        DelegateProperty FunctionsSupportedUpdate FunctionsSupportedUpdated;
        DelegateProperty LabelUpdate LabelUpdated;
    };

namespace Crestron.RAD.DeviceTypes.PowerController;
        // class declarations
         class SimplPowerController;
     class SimplPowerController 
    {
        // class delegates
        delegate FUNCTION BasicInformationDelegate ( SIMPLSHARPSTRING sdkVersion , SIMPLSHARPSTRING manufacturer , SIMPLSHARPSTRING baseModel , SIMPLSHARPSTRING supportedModels , SIMPLSHARPSTRING supportedSeries , SIMPLSHARPSTRING description , SIMPLSHARPSTRING driverVersion , SIMPLSHARPSTRING driverVersionDate , SIMPLSHARPSTRING guid , INTEGER supportsFeedback );
        delegate FUNCTION TxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION PacketTxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION LogDelegate ( SIMPLSHARPSTRING logMessage );
        delegate FUNCTION BasicConnectionSupportsDelegate ( INTEGER disconnect , INTEGER reconnect );
        delegate FUNCTION DriverLoadedDelegate ( INTEGER loaded , INTEGER port , INTEGER rebootRequired );
        delegate FUNCTION DriverAuthenticationSupportsDelegate ( INTEGER supportsUserName , INTEGER supportsPassword , INTEGER isRequired );
        delegate FUNCTION DriverAuthenticationUpdateDelegate ( INTEGER authStatus );
        delegate FUNCTION DriverCloudStatusDelegate ( INTEGER cloudStatus , SIMPLSHARPSTRING registrationError );
        delegate FUNCTION PowerControlSupports ( INTEGER group , INTEGER onOff , INTEGER toggle , INTEGER isOn , INTEGER cylclePower , INTEGER cyclePowerDelay , INTEGER powerOnDelay , INTEGER controlMode , INTEGER fullControlMode , INTEGER cycleOnlyMode );
        delegate FUNCTION PowerMeteringSupports ( INTEGER group , INTEGER amperage , INTEGER voltage , INTEGER frequency , INTEGER power , INTEGER enegryConsumption , INTEGER resetEnergyConsumption , INTEGER currentTemperature , INTEGER humidity );
        delegate FUNCTION PowerFaultSupports ( INTEGER group , INTEGER underVoltageThreshold , INTEGER underVoltageFault , INTEGER overVoltageThreshold , INTEGER overVoltage , INTEGER overCurrentThreshold , INTEGER overCurrent , INTEGER overTemperatureThreshold , INTEGER overTemperature , INTEGER overHumidityThreshold , INTEGER overHumidity , INTEGER surgeProtectionCompromised , INTEGER wiringFault , INTEGER surgeDetected );
        delegate FUNCTION RebootControllerSupports ( INTEGER group , INTEGER rebootFeedback );
        delegate FUNCTION IntegerUpdatedDelegate ( INTEGER value );
        delegate FUNCTION StringUpdatedDelegate ( SIMPLSHARPSTRING value );
        delegate FUNCTION RxOutDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION CustomIrCommandSupportsDelegate ( );
        delegate FUNCTION DriverCustomCommandDelegate ( );

        // class events

        // class functions
        FUNCTION SimplInitialize ( STRING filename , STRING ipAddress , INTEGER port , INTEGER enableLogging , INTEGER useDefaultDirectory );
        FUNCTION RegisterParentModule ( STRING parentModuleId );
        FUNCTION SimplOverrideUsername ( STRING username );
        FUNCTION SimplOverridePassword ( STRING password );
        FUNCTION SimplGetPowerBanks ();
        FUNCTION SimplOn ();
        FUNCTION SimplOff ();
        FUNCTION SimplToggle ();
        FUNCTION SimplCyclePower ();
        FUNCTION SimplSetCyclePowerDelay ( INTEGER value );
        FUNCTION SimplSetPowerOnDelay ( INTEGER value );
        FUNCTION SimplSetFullControlMode ();
        FUNCTION SimplSetCycleOnlyMode ();
        FUNCTION SimplResetEnergyConsumption ();
        FUNCTION SimplSetUnderVoltageThreshold ( SIMPLSHARPSTRING value );
        FUNCTION SimplSetOverVoltageThreshold ( SIMPLSHARPSTRING value );
        FUNCTION SimplSetOverCurrentThreshold ( SIMPLSHARPSTRING value );
        FUNCTION SimplSetOverTemperatureThreshold ( SIMPLSHARPSTRING value , INTEGER unit );
        FUNCTION SimplSetOverHumidityThreshold ( SIMPLSHARPSTRING value );
        FUNCTION SimplReboot ();
        FUNCTION Initialize ( STRING filename , SIGNED_LONG_INTEGER id , STRING ipAddress , SIGNED_LONG_INTEGER port );
        STRING_FUNCTION SimplSetComportSpec ( INTEGER comPort );
        FUNCTION ReceiveData ( STRING message );
        FUNCTION SimplEnableLogging ();
        FUNCTION SimplDisableLogging ();
        FUNCTION SimplEnableTxDebug ();
        FUNCTION SimplDisableTxDebug ();
        FUNCTION SimplEnableRxDebug ();
        FUNCTION SimplDisableRxDebug ();
        FUNCTION SimplDisconnect ();
        FUNCTION SimplReconnect ();
        FUNCTION SimplConnect ();
        FUNCTION SimplEnableRxOut ();
        FUNCTION SimplDisableRxOut ();
        FUNCTION SimplSendCustomCommand ( STRING message );
        FUNCTION SimplSendCustomCommandByName ( STRING commandName );
        FUNCTION SimplSendCustomCommandByValue ( STRING value );
        FUNCTION SimplTriggerCustomCommand ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandPress ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandRelease ( STRING commandName );
        INTEGER_FUNCTION SimplCustomCommandExists ( STRING commandName );
        FUNCTION SimplCustomCommandPageUp ();
        FUNCTION SimplCustomCommandPageDown ();
        FUNCTION SetDriverCustomCommands ();
        FUNCTION UpdateCustomCommands ( SIMPLSHARPSTRING labels[] , INTEGER curPage );
        FUNCTION SimplSetStringUserAttribute ( INTEGER index , STRING value );
        FUNCTION SimplSetAnalogUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplSetDigitalUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplRegisterWithCloud ( SIMPLSHARPSTRING uniqueId );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER UserAttributeIsAvailable[];
        INTEGER UserAttributeDataTypes[];
        INTEGER UserAttributeTypes[];
        STRING UserAttributeLabels[][];
        INTEGER UserAttributeIsPersistent[];
        INTEGER UserAttributeRequiredForConnection[];
        STRING UserAttributeDescriptions[][];
        SIMPLSHARPSTRING SimplCustomCommandNames[][];
        INTEGER SimplNumPages;
        INTEGER SimplNumCustomCommands;
        INTEGER SimplCurrentPage;

        // class properties
        DelegateProperty BasicInformationDelegate BasicInformationUpdate;
        DelegateProperty TxUpdatedDelegate TxUpdate;
        DelegateProperty PacketTxUpdatedDelegate PacketTxUpdate;
        DelegateProperty LogDelegate LogOutUpdate;
        DelegateProperty BasicConnectionSupportsDelegate BasicConnectionSupportsUpdate;
        DelegateProperty DriverLoadedDelegate DriverLoadedUpdate;
        DelegateProperty DriverAuthenticationSupportsDelegate DriverAuthenticationSupportsUpdate;
        DelegateProperty DriverAuthenticationUpdateDelegate DriverAuthenticationUpdateUpdate;
        DelegateProperty DriverCloudStatusDelegate DriverCloudStatusUpdate;
        DelegateProperty PowerControlSupports PowerControlSupportsUpdate;
        DelegateProperty PowerMeteringSupports PowerMeteringSupportsUpdate;
        DelegateProperty PowerFaultSupports PowerFaultSupportsUpdate;
        DelegateProperty RebootControllerSupports RebootControllerSupportsUpdate;
        DelegateProperty IntegerUpdatedDelegate ConnectionStateUpdate;
        DelegateProperty IntegerUpdatedDelegate IsOnUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayMinUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayMinUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate InFullControlModeUpdate;
        DelegateProperty IntegerUpdatedDelegate InCycleOnlyModeUpdate;
        DelegateProperty StringUpdatedDelegate AmperageUpdate;
        DelegateProperty StringUpdatedDelegate VoltageUpdate;
        DelegateProperty StringUpdatedDelegate FrequencyUpdate;
        DelegateProperty StringUpdatedDelegate PowerValueUpdate;
        DelegateProperty StringUpdatedDelegate EnergyConsumptionUpdate;
        DelegateProperty StringUpdatedDelegate CurrentTemperatureUpdate;
        DelegateProperty IntegerUpdatedDelegate CurrentTemperatureUnitsUpdate;
        DelegateProperty IntegerUpdatedDelegate CurrentTemperatureAvailableUpdate;
        DelegateProperty StringUpdatedDelegate HumidityUpdate;
        DelegateProperty IntegerUpdatedDelegate HumidityAvailableUpdate;
        DelegateProperty IntegerUpdatedDelegate DisabledByFaultUpdate;
        DelegateProperty StringUpdatedDelegate UnderVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate UnderVoltageUpdate;
        DelegateProperty StringUpdatedDelegate OverVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverVoltageUpdate;
        DelegateProperty StringUpdatedDelegate OverCurrentThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverCurrentUpdate;
        DelegateProperty StringUpdatedDelegate OverTemperatureThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverTemperatureThresholdUnitsUpdate;
        DelegateProperty IntegerUpdatedDelegate OverTemperatureUpdate;
        DelegateProperty StringUpdatedDelegate OverHumidityThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverHumidityUpdate;
        DelegateProperty IntegerUpdatedDelegate SurgeDetectedUpdate;
        DelegateProperty IntegerUpdatedDelegate SurgeProtectionCompromisedUpdate;
        DelegateProperty IntegerUpdatedDelegate WiringFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate IsRebootingUpdate;
        DelegateProperty IntegerUpdatedDelegate IsIdleUpdate;
        DelegateProperty IntegerUpdatedDelegate ErrorOccurredUpdate;
        DelegateProperty IntegerUpdatedDelegate HasDefaultTraitsUpdate;
        DelegateProperty IntegerUpdatedDelegate IsNotPluggableUpdate;
        DelegateProperty IntegerUpdatedDelegate ConnectedWithDeviceUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsPowerOnSequenceUpdate;
        DelegateProperty IntegerUpdatedDelegate NumberOfPowerBanksUpdate;
        DelegateProperty TxUpdatedDelegate InternalTxUpdated;
        DelegateProperty PacketTxUpdatedDelegate InternalPacketTxUpdated;
        DelegateProperty LogDelegate InternalLogOut;
        DelegateProperty RxOutDelegate InternalRxOut;
        DelegateProperty BasicConnectionSupportsDelegate InternalBasicConnectionSupportsUpdated;
        DelegateProperty CustomIrCommandSupportsDelegate InternalCustomIrCommandSupportsUpdatead;
        DelegateProperty DriverLoadedDelegate InternalDriverLoadedCallback;
        DelegateProperty DriverAuthenticationSupportsDelegate InternalDriverAuthenticationSupportsCallback;
        DelegateProperty DriverAuthenticationUpdateDelegate InternalDriverAuthenticationUpdateCallback;
        DelegateProperty DriverCustomCommandDelegate InternalDriverCustomCommandCallback;
        DelegateProperty DriverCloudStatusDelegate InternalDriverCloudStatusCallback;
        STRING ApplicationDirectory[];
        STRING InterfaceName[];
    };

namespace Crestron.RAD.DeviceTypes.PoolController;
        // class declarations
         class ABasicPoolController;
         class APool;
         class APoolControllerProtocol;
         class APoolPart;
         class PoolControllerRootObject;
         class PoolSection;
     class ABasicPoolController 
    {
        // class delegates

        // class events
        EventHandler IsAuthenticatedChanged ( ABasicPoolController sender, AuthenticationEventArgs e );
        EventHandler PresetStateChanged ( ABasicPoolController sender, DevicePresetStateEventArgs e );
        EventHandler UserAttributesChanged ( ABasicPoolController sender, UserAttributeListEventArgs e );
        EventHandler IsRegisteredWithCloudChanged ( ABasicPoolController sender, CloudRegistrationEventArgs e );

        // class functions
        FUNCTION Dispose ();
        FUNCTION ConvertJsonFileToDriverData ( STRING jsonString );
        FUNCTION RecallPreset ( STRING devicePresetId );
        FUNCTION Disconnect ();
        FUNCTION Reconnect ();
        FUNCTION Connect ();
        FUNCTION OverrideUsername ( STRING username );
        FUNCTION OverridePassword ( STRING password );
        FUNCTION SetUserAttribute ( STRING attributeId , STRING attributeValue );
        FUNCTION LoadModelFile ( STRING filePath );
        FUNCTION SendCustomCommandByName ( STRING commandName , CommandAction action );
        FUNCTION RegisterWithCloud ( STRING uniqueId );
        FUNCTION Initialize ( BaseRootObject driverData );
        FUNCTION SendCustomCommand ( STRING command );
        FUNCTION SendCustomCommandValue ( STRING commandValue );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Port;
        ComPortSpec ComSpec;
        STRING Description[];
        STRING Manufacturer[];
        STRING BaseModel[];
        STRING DriverVersion[];
        STRING UsernameMask[];
        STRING UsernameKey[];
        STRING PasswordMask[];
        STRING PasswordKey[];
        STRING DefaultUsername[];
        STRING DefaultPassword[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING DriverPath[];
    };

     class APool 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION HandleNameChange ( STRING receivedName );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PoolType Type;
        STRING Name[];
        STRING Id[];
    };

     class APoolPart 
    {
        // class delegates

        // class events
        EventHandler PropertyValueChanged ( APoolPart sender, DevicePropertyValueEventArgs e );
        EventHandler PropertyStateChanged ( APoolPart sender, DevicePropertyStateEventArgs e );

        // class functions
        FUNCTION HandleNameChange ( STRING receivedName );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        PoolPartType Type;
        STRING SectionId[];
        STRING Id[];
        STRING Name[];
    };

     class PoolControllerRootObject 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CrestronSerialDeviceApi CrestronSerialDeviceApi;
    };

namespace Crestron.RAD.DeviceTypes.NetworkSwitch;
        // class declarations
         class SimplNetworkSwitch;
         class SimplNetworkSwitchPort;
     class SimplNetworkSwitch 
    {
        // class delegates
        delegate FUNCTION BasicConnectionSupportsDelegate ( INTEGER disconnect , INTEGER reconnect );
        delegate FUNCTION BasicInformationDelegate ( SIMPLSHARPSTRING sdkVersion , SIMPLSHARPSTRING manufacturer , SIMPLSHARPSTRING baseModel , SIMPLSHARPSTRING supportedModels , SIMPLSHARPSTRING supportedSeries , SIMPLSHARPSTRING description , SIMPLSHARPSTRING driverVersion , SIMPLSHARPSTRING driverVersionDate , SIMPLSHARPSTRING guid , INTEGER supportsFeedback );
        delegate FUNCTION IntegerUpdatedDelegate ( INTEGER value );
        delegate FUNCTION StringUpdatedDelegate ( SIMPLSHARPSTRING value );
        delegate FUNCTION DriverAuthenticationSupportsDelegate ( INTEGER supportsUserName , INTEGER supportsPassword , INTEGER isRequired );
        delegate FUNCTION DriverAuthenticationUpdateDelegate ( INTEGER authStatus );
        delegate FUNCTION DriverCloudStatusDelegate ( INTEGER cloudStatus , SIMPLSHARPSTRING registrationError );
        delegate FUNCTION DriverLoadedDelegate ( INTEGER loaded , INTEGER port , INTEGER rebootRequired );
        delegate FUNCTION IntegerIntegerUpdatedDelegate ( INTEGER value1 , INTEGER value2 );
        delegate FUNCTION LogDelegate ( SIMPLSHARPSTRING logMessage );
        delegate FUNCTION PacketTxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION PowerFaultSupports ( INTEGER group , INTEGER underVoltageThreshold , INTEGER underVoltageFault , INTEGER overVoltageThreshold , INTEGER overVoltage , INTEGER overCurrentThreshold , INTEGER overCurrent , INTEGER overTemperatureThreshold , INTEGER overTemperature , INTEGER overHumidityThreshold , INTEGER overHumidity , INTEGER surgeProtectionCompromised , INTEGER wiringFault , INTEGER surgeDetected );
        delegate FUNCTION IntegerStringUpdatedDelegate ( INTEGER value1 , SIMPLSHARPSTRING value2 );
        delegate FUNCTION TxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION RxOutDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION CustomIrCommandSupportsDelegate ( );
        delegate FUNCTION DriverCustomCommandDelegate ( );

        // class events

        // class functions
        FUNCTION RegisterParentModule ( STRING parentModuleId );
        FUNCTION SimplCyclePower ();
        FUNCTION SimplDefaults_Reset ();
        FUNCTION SimplFactory_Reset ();
        SIMPLSHARPSTRING_FUNCTION SimplGetComponentName ( INTEGER simplIndex );
        INTEGER_FUNCTION SimplGetComponentTemperatureC ( INTEGER simplIndex );
        INTEGER_FUNCTION SimplGetComponentTemperatureF ( INTEGER simplIndex );
        INTEGER_FUNCTION SimplGetComponentTemperatureIsAvailable ( INTEGER simplIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetComponentVersion ( INTEGER simplIndex );
        INTEGER_FUNCTION SimplGetFanSpeedPercent ( INTEGER simplIndex );
        INTEGER_FUNCTION SimplGetFanSpeedRPM ( INTEGER simplIndex );
        INTEGER_FUNCTION SimplGetSupportsFanSpeedPercent ( INTEGER simplIndex );
        INTEGER_FUNCTION SimplGetSupportsFanSpeedRPM ( INTEGER simplIndex );
        FUNCTION SimplInitialize ( STRING filename , STRING ipAddress , INTEGER port , INTEGER enableLogging , INTEGER useDefaultDirectory );
        FUNCTION SimplOverridePassword ( STRING password );
        FUNCTION SimplOverrideUsername ( STRING username );
        FUNCTION SimplPoE_Disable_All ();
        FUNCTION SimplPoE_Enable_All ();
        FUNCTION SimplPowerOff ();
        FUNCTION SimplPowerOn ();
        FUNCTION SimplReboot ();
        FUNCTION SimplSetName ( STRING name );
        FUNCTION SimplSetOverCurrentThreshold ( STRING value );
        FUNCTION SimplSetOverHumidityThreshold ( STRING value );
        FUNCTION SimplSetOverTemperatureThreshold ( STRING value , INTEGER units );
        FUNCTION SimplSetOverVoltageThreshold ( STRING value );
        FUNCTION SimplSetUnderVoltageThreshold ( STRING value );
        FUNCTION SimplToggle ();
        FUNCTION Initialize ( STRING filename , SIGNED_LONG_INTEGER id , STRING ipAddress , SIGNED_LONG_INTEGER port );
        STRING_FUNCTION SimplSetComportSpec ( INTEGER comPort );
        FUNCTION ReceiveData ( STRING message );
        FUNCTION SimplEnableLogging ();
        FUNCTION SimplDisableLogging ();
        FUNCTION SimplEnableTxDebug ();
        FUNCTION SimplDisableTxDebug ();
        FUNCTION SimplEnableRxDebug ();
        FUNCTION SimplDisableRxDebug ();
        FUNCTION SimplDisconnect ();
        FUNCTION SimplReconnect ();
        FUNCTION SimplConnect ();
        FUNCTION SimplEnableRxOut ();
        FUNCTION SimplDisableRxOut ();
        FUNCTION SimplSendCustomCommand ( STRING message );
        FUNCTION SimplSendCustomCommandByName ( STRING commandName );
        FUNCTION SimplSendCustomCommandByValue ( STRING value );
        FUNCTION SimplTriggerCustomCommand ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandPress ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandRelease ( STRING commandName );
        INTEGER_FUNCTION SimplCustomCommandExists ( STRING commandName );
        FUNCTION SimplCustomCommandPageUp ();
        FUNCTION SimplCustomCommandPageDown ();
        FUNCTION SetDriverCustomCommands ();
        FUNCTION UpdateCustomCommands ( SIMPLSHARPSTRING labels[] , INTEGER curPage );
        FUNCTION SimplSetStringUserAttribute ( INTEGER index , STRING value );
        FUNCTION SimplSetAnalogUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplSetDigitalUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplRegisterWithCloud ( SIMPLSHARPSTRING uniqueId );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER UserAttributeIsAvailable[];
        INTEGER UserAttributeDataTypes[];
        INTEGER UserAttributeTypes[];
        STRING UserAttributeLabels[][];
        INTEGER UserAttributeIsPersistent[];
        INTEGER UserAttributeRequiredForConnection[];
        STRING UserAttributeDescriptions[][];
        SIMPLSHARPSTRING SimplCustomCommandNames[][];
        INTEGER SimplNumPages;
        INTEGER SimplNumCustomCommands;
        INTEGER SimplCurrentPage;

        // class properties
        DelegateProperty BasicConnectionSupportsDelegate BasicConnectionSupportsUpdate;
        DelegateProperty BasicInformationDelegate BasicInformationUpdate;
        DelegateProperty IntegerUpdatedDelegate ConnectionStateUpdate;
        DelegateProperty IntegerUpdatedDelegate CPUUsagePercentUpdate;
        DelegateProperty StringUpdatedDelegate DeviceFirmwareVersionUpdate;
        DelegateProperty StringUpdatedDelegate DeviceMACAddressUpdate;
        DelegateProperty StringUpdatedDelegate DeviceSerialNumberUpdate;
        DelegateProperty StringUpdatedDelegate DeviceUptimeUpdate;
        DelegateProperty IntegerUpdatedDelegate DisabledByFaultUpdate;
        DelegateProperty DriverAuthenticationSupportsDelegate DriverAuthenticationSupportsUpdate;
        DelegateProperty DriverAuthenticationUpdateDelegate DriverAuthenticationUpdateUpdate;
        DelegateProperty DriverCloudStatusDelegate DriverCloudStatusUpdate;
        DelegateProperty DriverLoadedDelegate DriverLoadedUpdate;
        DelegateProperty IntegerUpdatedDelegate ErrorOccurredUpdate;
        DelegateProperty IntegerIntegerUpdatedDelegate FanSpeedPercentUpdate;
        DelegateProperty IntegerIntegerUpdatedDelegate FanSpeedRPMUpdate;
        DelegateProperty IntegerUpdatedDelegate IdleUpdate;
        DelegateProperty IntegerUpdatedDelegate IsOnUpdate;
        DelegateProperty IntegerUpdatedDelegate IsRebootingUpdate;
        DelegateProperty LogDelegate LogOutUpdate;
        DelegateProperty StringUpdatedDelegate NameUpdate;
        DelegateProperty IntegerUpdatedDelegate NumberOfFansUpdate;
        DelegateProperty IntegerUpdatedDelegate NumberOfPortsUpdate;
        DelegateProperty IntegerUpdatedDelegate NumberOfTemperatureComponentsUpdate;
        DelegateProperty StringUpdatedDelegate OverCurrentThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverCurrentUpdate;
        DelegateProperty StringUpdatedDelegate OverHumidityThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverHumidityUpdate;
        DelegateProperty IntegerUpdatedDelegate OverTemperatureThresholdUnitsUpdate;
        DelegateProperty StringUpdatedDelegate OverTemperatureThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverTemperatureUpdate;
        DelegateProperty StringUpdatedDelegate OverVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverVoltageUpdate;
        DelegateProperty PacketTxUpdatedDelegate PacketTxUpdate;
        DelegateProperty PowerFaultSupports PowerFaultSupportsUpdate;
        DelegateProperty IntegerUpdatedDelegate RAMUsagePercentUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsComponentTemperatureUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsCPUUsagePercentUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsCyclePowerUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsDefaultsResetUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsDeviceFirmwareVersionUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsDeviceMACAddressUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsDeviceUptimeUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsFactoryResetUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsFanStatusUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsIsOnUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsNameUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOnOffUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsPoEEnableDisableAllUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsRAMUsagePercentUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsRebootControlGroup;
        DelegateProperty IntegerUpdatedDelegate SupportsRebootFeedbackUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsSerialNumberUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsSetNameUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsSystemComponentVersionsUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsToggleUpdate;
        DelegateProperty IntegerUpdatedDelegate SurgeDetectedUpdate;
        DelegateProperty IntegerUpdatedDelegate SurgeProtectionCompromisedUpdate;
        DelegateProperty IntegerStringUpdatedDelegate SystemComponentName;
        DelegateProperty IntegerStringUpdatedDelegate SystemComponentVersion;
        DelegateProperty IntegerUpdatedDelegate SystemComponentVersionCountUpdate;
        DelegateProperty IntegerIntegerUpdatedDelegate TemperatureComponentIsAvailableUpdate;
        DelegateProperty IntegerIntegerUpdatedDelegate TemperatureComponentTemperature_CUpdate;
        DelegateProperty IntegerIntegerUpdatedDelegate TemperatureComponentTemperature_FUpdate;
        DelegateProperty TxUpdatedDelegate TxUpdate;
        DelegateProperty StringUpdatedDelegate UnderVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate UnderVoltageUpdate;
        DelegateProperty IntegerUpdatedDelegate WiringFaultUpdate;
        DelegateProperty TxUpdatedDelegate InternalTxUpdated;
        DelegateProperty PacketTxUpdatedDelegate InternalPacketTxUpdated;
        DelegateProperty LogDelegate InternalLogOut;
        DelegateProperty RxOutDelegate InternalRxOut;
        DelegateProperty BasicConnectionSupportsDelegate InternalBasicConnectionSupportsUpdated;
        DelegateProperty CustomIrCommandSupportsDelegate InternalCustomIrCommandSupportsUpdatead;
        DelegateProperty DriverLoadedDelegate InternalDriverLoadedCallback;
        DelegateProperty DriverAuthenticationSupportsDelegate InternalDriverAuthenticationSupportsCallback;
        DelegateProperty DriverAuthenticationUpdateDelegate InternalDriverAuthenticationUpdateCallback;
        DelegateProperty DriverCustomCommandDelegate InternalDriverCustomCommandCallback;
        DelegateProperty DriverCloudStatusDelegate InternalDriverCloudStatusCallback;
        STRING ApplicationDirectory[];
        STRING InterfaceName[];
    };

     class SimplNetworkSwitchPort 
    {
        // class delegates
        delegate FUNCTION StringUpdatedDelegate ( SIMPLSHARPSTRING value );
        delegate FUNCTION IntegerUpdatedDelegate ( INTEGER value );
        delegate FUNCTION ModuleRegistrationUpdated ( INTEGER registered );

        // class events

        // class functions
        FUNCTION RegisterPortModule ( STRING parentModuleId , INTEGER portNumber );
        FUNCTION SimplCyclePower ();
        FUNCTION SimplDisablePort ();
        FUNCTION SimplEnablePort ();
        FUNCTION SimplPowerOff ();
        FUNCTION SimplPowerOn ();
        FUNCTION SimplPowerToggle ();
        FUNCTION SimplResetEnergyConsumption ();
        FUNCTION SimplSetCycleOnlyMode ();
        FUNCTION SimplSetCyclePowerDelay ( INTEGER value );
        FUNCTION SimplSetFullControlMode ();
        FUNCTION SimplSetName ( STRING value );
        FUNCTION SimplSetOverCurrentThreshold ( STRING value );
        FUNCTION SimplSetOverHumidityThreshold ( STRING value );
        FUNCTION SimplSetOverTemperatureThreshold ( STRING value , INTEGER units );
        FUNCTION SimplSetOverVoltageThreshold ( STRING value );
        FUNCTION SimplSetPowerOnDelay ( INTEGER value );
        FUNCTION SimplSetUnderVoltageThreshold ( STRING value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty StringUpdatedDelegate AmperageUpdate;
        DelegateProperty IntegerUpdatedDelegate ConnectedWithDeviceUpdate;
        DelegateProperty IntegerUpdatedDelegate CurrentTemperatureAvailableUpdate;
        DelegateProperty IntegerUpdatedDelegate CurrentTemperatureUnitsUpdate;
        DelegateProperty StringUpdatedDelegate CurrentTemperatureUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayMinUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayUpdate;
        DelegateProperty IntegerUpdatedDelegate DeviceAttachmentDetectionUpdate;
        DelegateProperty IntegerUpdatedDelegate DisabledByFaultUpdate;
        DelegateProperty StringUpdatedDelegate EnergyConsumptionUpdate;
        DelegateProperty StringUpdatedDelegate FrequencyUpdate;
        DelegateProperty IntegerUpdatedDelegate FullDuplexModeUpdate;
        DelegateProperty IntegerUpdatedDelegate HalfDuplexModeUpdate;
        DelegateProperty IntegerUpdatedDelegate HumidityAvailableUpdate;
        DelegateProperty StringUpdatedDelegate HumidityUpdate;
        DelegateProperty IntegerUpdatedDelegate InCycleOnlyModeUpdate;
        DelegateProperty IntegerUpdatedDelegate InFullControlModeUpdate;
        DelegateProperty IntegerUpdatedDelegate IsAutoNegotiationEnabledUpdate;
        DelegateProperty IntegerUpdatedDelegate IsLinkUpUpdate;
        DelegateProperty IntegerUpdatedDelegate IsOnUpdate;
        DelegateProperty IntegerUpdatedDelegate IsPortEnabledUpdate;
        DelegateProperty StringUpdatedDelegate LabelUpdate;
        DelegateProperty IntegerUpdatedDelegate LinkSpeedUpdate;
        DelegateProperty ModuleRegistrationUpdated ModuleRegistrationUpdate;
        DelegateProperty StringUpdatedDelegate NameUpdate;
        DelegateProperty IntegerUpdatedDelegate NetworkPortNumberUpdate;
        DelegateProperty IntegerUpdatedDelegate NumberOfLoadsUpdate;
        DelegateProperty StringUpdatedDelegate OverCurrentThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverCurrentUpdate;
        DelegateProperty StringUpdatedDelegate OverHumidityThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverHumidityUpdate;
        DelegateProperty IntegerUpdatedDelegate OverTemperatureThresholdUnitsUpdate;
        DelegateProperty StringUpdatedDelegate OverTemperatureThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverTemperatureUpdate;
        DelegateProperty StringUpdatedDelegate OverVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverVoltageUpdate;
        DelegateProperty IntegerUpdatedDelegate PoEPortNumberUpdate;
        DelegateProperty StringUpdatedDelegate PowerAllocatedUpdate;
        DelegateProperty StringUpdatedDelegate PowerClassUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayMinUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayUpdate;
        DelegateProperty StringUpdatedDelegate PowerValueUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_EnableDisablePortUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_PhysicalStatusUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_IsLinkUpUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_IsPortEnabledDisabledUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_PowerAllocatedUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_PowerClassUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsAmperageUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsControlModeUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsCurrentTemperatureUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsCycleOnlyModeUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsCyclePowerDelayUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsCyclePowerUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsDeviceAttachmentDetectionUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsEnergyConsumptionUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsFrequencyUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsFullControlModeUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsGetNameUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsHumidityUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsIsOnUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOnOffUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOverCurrentFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOverCurrentThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOverHumidityFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOverHumidityThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOverTemperatureFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOverTemperatureThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOverVoltageFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsOverVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsPowerFaultsGroupUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsPowerOnDelayUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsPowerUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsResetEnergyConsumptionUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsSetNameUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsSurgeDetectedFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsSurgeProtectionCompromisedFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsToggleUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsUnderVoltageFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsUnderVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsVoltageUpdate;
        DelegateProperty IntegerUpdatedDelegate SupportsWiringFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate SurgeDetectedUpdate;
        DelegateProperty IntegerUpdatedDelegate SurgeProtectionCompromisedUpdate;
        DelegateProperty StringUpdatedDelegate UnderVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate UnderVoltageUpdate;
        DelegateProperty IntegerUpdatedDelegate UnspecifiedFaultUpdate;
        DelegateProperty StringUpdatedDelegate VoltageUpdate;
        DelegateProperty IntegerUpdatedDelegate WiringFaultUpdate;
    };

namespace Crestron.RAD.DeviceTypes.Gateway;
        // class declarations
         class AGateway;
         class AGatewayProtocol;
         class GatewayPairedDeviceInformation;
         class GatewayRootObject;
     class AGateway 
    {
        // class delegates

        // class events
        EventHandler UserAttributesChanged ( AGateway sender, UserAttributeListEventArgs e );
        EventHandler IsRegisteredWithCloudChanged ( AGateway sender, CloudRegistrationEventArgs e );

        // class functions
        FUNCTION ConvertJsonFileToDriverData ( STRING jsonString );
        FUNCTION Dispose ();
        FUNCTION Reconnect ();
        FUNCTION Connect ();
        FUNCTION OverrideUsername ( STRING username );
        FUNCTION OverridePassword ( STRING password );
        FUNCTION SetUserAttribute ( STRING attributeId , STRING attributeValue );
        FUNCTION LoadModelFile ( STRING filePath );
        FUNCTION SendCustomCommandByName ( STRING commandName , CommandAction action );
        FUNCTION RegisterWithCloud ( STRING uniqueId );
        FUNCTION Initialize ( BaseRootObject driverData );
        FUNCTION SendCustomCommand ( STRING command );
        FUNCTION SendCustomCommandValue ( STRING commandValue );
        FUNCTION Disconnect ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Port;
        ComPortSpec ComSpec;
        STRING Description[];
        STRING Manufacturer[];
        STRING BaseModel[];
        STRING DriverVersion[];
        STRING UsernameMask[];
        STRING UsernameKey[];
        STRING PasswordMask[];
        STRING PasswordKey[];
        STRING DefaultUsername[];
        STRING DefaultPassword[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING DriverPath[];
    };

     class GatewayRootObject 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CrestronSerialDeviceApi CrestronSerialDeviceApi;
    };

namespace Crestron.RAD.DeviceTypes.CustomConferencing;
        // class declarations
         class SimplCustomConferencing;
         class SimplCustomConferencingWidget;
     class SimplCustomConferencing 
    {
        // class delegates
        delegate FUNCTION IntegerUpdatedDelegate ( INTEGER value );
        delegate FUNCTION BasicConnectionSupportsDelegate ( INTEGER disconnect , INTEGER reconnect );
        delegate FUNCTION BasicInformationDelegate ( SIMPLSHARPSTRING sdkVersion , SIMPLSHARPSTRING manufacturer , SIMPLSHARPSTRING baseModel , SIMPLSHARPSTRING supportedModels , SIMPLSHARPSTRING supportedSeries , SIMPLSHARPSTRING description , SIMPLSHARPSTRING driverVersion , SIMPLSHARPSTRING driverVersionDate , SIMPLSHARPSTRING guid , INTEGER supportsFeedback );
        delegate FUNCTION DriverAuthenticationSupportsDelegate ( INTEGER supportsUserName , INTEGER supportsPassword , INTEGER isRequired );
        delegate FUNCTION DriverAuthenticationUpdateDelegate ( INTEGER authStatus );
        delegate FUNCTION DriverLoadedDelegate ( INTEGER loaded , INTEGER port , INTEGER rebootRequired );
        delegate FUNCTION StringUpdatedDelegate ( SIMPLSHARPSTRING value );
        delegate FUNCTION LogDelegate ( SIMPLSHARPSTRING logMessage );
        delegate FUNCTION PacketTxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION TxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION RxOutDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION CustomIrCommandSupportsDelegate ( );
        delegate FUNCTION DriverCustomCommandDelegate ( );
        delegate FUNCTION DriverCloudStatusDelegate ( INTEGER registrationStatus , SIMPLSHARPSTRING registrationError );

        // class events

        // class functions
        FUNCTION SimplAddExternalSource ( SIMPLSHARPSTRING id , SIMPLSHARPSTRING name , SIMPLSHARPSTRING connector , SIMPLSHARPSTRING icon , INTEGER isAvailable );
        FUNCTION SimplEndCall ();
        SIMPLSHARPSTRING_FUNCTION SimplGetAvailableConnectorID ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetAvailableConnectorName ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetAvailableIconID ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetAvailableIconName ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetContentSource ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetExternalSourceConnector ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetExternalSourceIcon ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetExternalSourceID ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetExternalSourceName ( INTEGER sourceIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetSupportedUIDefinitionFormat ( INTEGER sourceIndex );
        FUNCTION SimplGetWidgetStates ();
        FUNCTION SimplInitialize ( STRING filename , STRING ipAddress , INTEGER port , INTEGER enableLogging , INTEGER useDefaultDirectory );
        FUNCTION SimplMicMuteOff ();
        FUNCTION SimplMicMuteOn ();
        FUNCTION SimplMicMuteToggle ();
        FUNCTION SimplNotifyExternalSourceRouted ( INTEGER sourceIndex );
        FUNCTION SimplOpenUIPanel ( SIMPLSHARPSTRING panelId , SIMPLSHARPSTRING pageId );
        FUNCTION SimplOverridePassword ( STRING password );
        FUNCTION SimplOverrideUsername ( STRING username );
        FUNCTION SimplRemoveAllExternalSources ();
        FUNCTION SimplRemoveExternalSource ( INTEGER sourceIndex );
        FUNCTION SimplRemoveUIDefinition ( SIMPLSHARPSTRING id );
        FUNCTION SimplSelectShare ( INTEGER sourceIndex , INTEGER share );
        FUNCTION SimplSetExternalSourceIsAvailable ( INTEGER sourceIndex , INTEGER available );
        FUNCTION SimplShareRemoteContent ();
        FUNCTION SimplUploadUIDefinition ( SIMPLSHARPSTRING simplFilename , SIMPLSHARPSTRING simplId );
        FUNCTION RegisterParentModule ( STRING parentModuleId );
        FUNCTION SetWidgetConfiguration ( STRING item , STRING value );
        FUNCTION Initialize ( STRING filename , SIGNED_LONG_INTEGER id , STRING ipAddress , SIGNED_LONG_INTEGER port );
        STRING_FUNCTION SimplSetComportSpec ( INTEGER comPort );
        FUNCTION ReceiveData ( STRING message );
        FUNCTION SimplEnableLogging ();
        FUNCTION SimplDisableLogging ();
        FUNCTION SimplEnableTxDebug ();
        FUNCTION SimplDisableTxDebug ();
        FUNCTION SimplEnableRxDebug ();
        FUNCTION SimplDisableRxDebug ();
        FUNCTION SimplDisconnect ();
        FUNCTION SimplReconnect ();
        FUNCTION SimplConnect ();
        FUNCTION SimplEnableRxOut ();
        FUNCTION SimplDisableRxOut ();
        FUNCTION SimplSendCustomCommand ( STRING message );
        FUNCTION SimplSendCustomCommandByName ( STRING commandName );
        FUNCTION SimplSendCustomCommandByValue ( STRING value );
        FUNCTION SimplTriggerCustomCommand ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandPress ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandRelease ( STRING commandName );
        INTEGER_FUNCTION SimplCustomCommandExists ( STRING commandName );
        FUNCTION SimplCustomCommandPageUp ();
        FUNCTION SimplCustomCommandPageDown ();
        FUNCTION SetDriverCustomCommands ();
        FUNCTION UpdateCustomCommands ( SIMPLSHARPSTRING labels[] , INTEGER curPage );
        FUNCTION SimplSetStringUserAttribute ( INTEGER index , STRING value );
        FUNCTION SimplSetAnalogUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplSetDigitalUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplRegisterWithCloud ( SIMPLSHARPSTRING uniqueId );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER UserAttributeIsAvailable[];
        INTEGER UserAttributeDataTypes[];
        INTEGER UserAttributeTypes[];
        STRING UserAttributeLabels[][];
        INTEGER UserAttributeIsPersistent[];
        INTEGER UserAttributeRequiredForConnection[];
        STRING UserAttributeDescriptions[][];
        SIMPLSHARPSTRING SimplCustomCommandNames[][];
        INTEGER SimplNumPages;
        INTEGER SimplNumCustomCommands;
        INTEGER SimplCurrentPage;

        // class properties
        DelegateProperty IntegerUpdatedDelegate AvailableConnectorsChangedUpdate;
        DelegateProperty IntegerUpdatedDelegate AvailableContentSourcesChangedUpdate;
        DelegateProperty IntegerUpdatedDelegate AvailableIconsChangedUpdate;
        DelegateProperty BasicConnectionSupportsDelegate BasicConnectionSupportsUpdate;
        DelegateProperty BasicInformationDelegate BasicInformationUpdate;
        DelegateProperty IntegerUpdatedDelegate ConnectionStateUpdate;
        DelegateProperty DriverAuthenticationSupportsDelegate DriverAuthenticationSupportsUpdate;
        DelegateProperty DriverAuthenticationUpdateDelegate DriverAuthenticationUpdate;
        DelegateProperty DriverLoadedDelegate DriverLoadedUpdate;
        DelegateProperty StringUpdatedDelegate ExternalSourceRoutedUpdate;
        DelegateProperty IntegerUpdatedDelegate IsCallActiveUpdate;
        DelegateProperty IntegerUpdatedDelegate IsMicMutedUpdate;
        DelegateProperty IntegerUpdatedDelegate IsSharingContentUpdate;
        DelegateProperty LogDelegate LogOutUpdate;
        DelegateProperty IntegerUpdatedDelegate MaxSharedSourcesUpdate;
        DelegateProperty PacketTxUpdatedDelegate PacketTxUpdate;
        DelegateProperty PacketTxUpdatedDelegate PacketTxUpdated;
        DelegateProperty IntegerUpdatedDelegate SourcesChangedUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_AddRemoveExternalSourceUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_AvailableConnectorsUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_AvailableContentSourcesUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_AvailableIconsUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_EndCallUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_GetWidgetStatesUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_IDUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_IsCallActiveUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_IsMicMutedUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_IsSharingContentUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_MicMuteOnOffUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_MicMuteToggleUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_OpenUIPanelUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_RemoveAllExternalSourcesUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_RemoveUIDefinitionUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_SetStatusUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_SetWidgetStatesUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_ShareRemoteContentUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_SupportedUIDefinitionsFormatsUpdate;
        DelegateProperty IntegerUpdatedDelegate Supports_UploadUIDefinitionUpdate;
        DelegateProperty TxUpdatedDelegate TxUpdate;
        DelegateProperty TxUpdatedDelegate TxUpdated;
        DelegateProperty TxUpdatedDelegate InternalTxUpdated;
        DelegateProperty PacketTxUpdatedDelegate InternalPacketTxUpdated;
        DelegateProperty LogDelegate InternalLogOut;
        DelegateProperty RxOutDelegate InternalRxOut;
        DelegateProperty BasicConnectionSupportsDelegate InternalBasicConnectionSupportsUpdated;
        DelegateProperty CustomIrCommandSupportsDelegate InternalCustomIrCommandSupportsUpdatead;
        DelegateProperty DriverLoadedDelegate InternalDriverLoadedCallback;
        DelegateProperty DriverAuthenticationSupportsDelegate InternalDriverAuthenticationSupportsCallback;
        DelegateProperty DriverAuthenticationUpdateDelegate InternalDriverAuthenticationUpdateCallback;
        DelegateProperty DriverCustomCommandDelegate InternalDriverCustomCommandCallback;
        DelegateProperty DriverCloudStatusDelegate InternalDriverCloudStatusCallback;
        STRING ApplicationDirectory[];
        STRING InterfaceName[];
    };

     class SimplCustomConferencingWidget 
    {
        // class delegates
        delegate FUNCTION IntegerIntegerUpdatedDelegate ( INTEGER value1 , INTEGER value2 );
        delegate FUNCTION PulseDelegate ( );
        delegate FUNCTION IntegerUpdatedDelegate ( INTEGER value );
        delegate FUNCTION ModuleRegistrationUpdated ( INTEGER registered );

        // class events

        // class functions
        FUNCTION RegisterPortModule ( STRING parentModuleId , STRING widgetId , STRING widgetType );
        FUNCTION SetWidgetConfiguration ( STRING item , STRING value );
        FUNCTION SimplUpdateButtonIsSelected ( SIMPLSHARPSTRING buttonValue );
        FUNCTION SimplUpdateIsOff ();
        FUNCTION SimplUpdateIsOn ();
        FUNCTION SimplUpdateIsPressed ( INTEGER isPressed );
        FUNCTION SimplUpdateTextToSend ( SIMPLSHARPSTRING text );
        FUNCTION SimplUpdateValueIs ( SIGNED_INTEGER value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerIntegerUpdatedDelegate ArrowUpdate;
        DelegateProperty IntegerIntegerUpdatedDelegate ButtonSelectedUpdate;
        DelegateProperty PulseDelegate ClickedUpdate;
        DelegateProperty IntegerUpdatedDelegate DecrementUpdate;
        DelegateProperty IntegerUpdatedDelegate IncrementUpdate;
        DelegateProperty ModuleRegistrationUpdated ModuleRegistrationUpdate;
        DelegateProperty IntegerUpdatedDelegate OnOffStateUpdate;
        DelegateProperty IntegerUpdatedDelegate PressedUpdate;
        DelegateProperty IntegerUpdatedDelegate ValueUpdate;
        DelegateProperty IntegerUpdatedDelegate WidgetDefinedUpdate;
    };

namespace Crestron.RAD.DeviceTypes.AudioVideoSwitcher;
        // class declarations
         class AAudioVideoSwitcher;
         class AAudioVideoSwitcherProtocol;
     class AAudioVideoSwitcher 
    {
        // class delegates

        // class events
        EventHandler IsAuthenticatedChanged ( AAudioVideoSwitcher sender, AuthenticationEventArgs e );
        EventHandler UserAttributesChanged ( AAudioVideoSwitcher sender, UserAttributeListEventArgs e );
        EventHandler IsRegisteredWithCloudChanged ( AAudioVideoSwitcher sender, CloudRegistrationEventArgs e );

        // class functions
        FUNCTION Dispose ();
        FUNCTION ConvertJsonFileToDriverData ( STRING jsonString );
        FUNCTION RouteVideoInput ( STRING inputId , STRING outputId );
        FUNCTION RouteAudioInput ( STRING inputId , STRING outputId );
        FUNCTION PowerOn ();
        FUNCTION PowerOff ();
        FUNCTION PowerToggle ();
        FUNCTION Reconnect ();
        FUNCTION Connect ();
        FUNCTION OverrideUsername ( STRING username );
        FUNCTION OverridePassword ( STRING password );
        FUNCTION SetUserAttribute ( STRING attributeId , STRING attributeValue );
        FUNCTION LoadModelFile ( STRING filePath );
        FUNCTION SendCustomCommandByName ( STRING commandName , CommandAction action );
        FUNCTION RegisterWithCloud ( STRING uniqueId );
        FUNCTION Initialize ( BaseRootObject driverData );
        FUNCTION SendCustomCommand ( STRING command );
        FUNCTION SendCustomCommandValue ( STRING commandValue );
        FUNCTION Disconnect ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING AudioVideoSwitcherId[];
        SIGNED_INTEGER CurrentTemperature;
        TemperatureUnit CurrentTemperatureUnits;
        LONG_INTEGER WarmUpTime;
        LONG_INTEGER CoolDownTime;
        SIGNED_LONG_INTEGER Port;
        ComPortSpec ComSpec;
        STRING Description[];
        STRING Manufacturer[];
        STRING BaseModel[];
        STRING DriverVersion[];
        STRING UsernameMask[];
        STRING UsernameKey[];
        STRING PasswordMask[];
        STRING PasswordKey[];
        STRING DefaultUsername[];
        STRING DefaultPassword[];
        LONG_INTEGER MinimumResponseTime;
        LONG_INTEGER MaximumResponseTime;
        STRING DriverPath[];
    };

namespace Crestron.RAD.DeviceTypes.AudioMixer;
        // class declarations
         class AudioMixerRootObject;
         class SimplAudioMixer;
         class SimplAudioMixerAncillaryDevice;
         class SimplAudioMixerChannel;
         class SimplAudioMixerCrosspointGain;
         class SimplPowerBank;
           class IntegerUpdatedDelegate;
           class PowerControlSupports;
           class PowerMeteringSupports;
           class PowerFaultSupports;
           class PingDeviceMonitoringSupports;
           class PowerBankNameSupports;
           class StringUpdatedDelegate;
     class AudioMixerRootObject 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        CrestronSerialDeviceApi CrestronSerialDeviceApi;
    };

     class SimplAudioMixer 
    {
        // class delegates
        delegate FUNCTION BasicInformationDelegate ( SIMPLSHARPSTRING sdkVersion , SIMPLSHARPSTRING manufacturer , SIMPLSHARPSTRING baseModel , SIMPLSHARPSTRING supportedModels , SIMPLSHARPSTRING supportedSeries , SIMPLSHARPSTRING description , SIMPLSHARPSTRING driverVersion , SIMPLSHARPSTRING driverVersionDate , SIMPLSHARPSTRING guid , INTEGER supportsFeedback );
        delegate FUNCTION TxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION PacketTxUpdatedDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION LogDelegate ( SIMPLSHARPSTRING logMessage );
        delegate FUNCTION BasicConnectionSupportsDelegate ( INTEGER disconnect , INTEGER reconnect );
        delegate FUNCTION DriverLoadedDelegate ( INTEGER loaded , INTEGER port , INTEGER rebootRequired );
        delegate FUNCTION DriverAuthenticationSupportsDelegate ( INTEGER supportsUserName , INTEGER supportsPassword , INTEGER isRequired );
        delegate FUNCTION DriverAuthenticationUpdateDelegate ( INTEGER authStatus );
        delegate FUNCTION DriverCloudStatusDelegate ( INTEGER cloudStatus , SIMPLSHARPSTRING registrationError );
        delegate FUNCTION InputChannelsUpdated ( INTEGER inputCount , INTEGER outputCount );
        delegate FUNCTION PresetInformationUpdated ( INTEGER presetCount );
        delegate FUNCTION DeviceInformationSupportsUpdated ( INTEGER supportUptime , INTEGER supportsFirmware , INTEGER supportsDefaultsReset , INTEGER supportsFactoryReset );
        delegate FUNCTION DeviceUptimeUpdated ( SIMPLSHARPSTRING uptime );
        delegate FUNCTION DeviceFirmwareVesionUpdated ( SIMPLSHARPSTRING version );
        delegate FUNCTION PresetActivityUpdated ( INTEGER presetIndex , INTEGER isActive );
        delegate FUNCTION ConnectionStateUpdated ( INTEGER connected );
        delegate FUNCTION NumberOfAssociatedDevicesUpdated ( INTEGER count );
        delegate FUNCTION RebootSupportsUpdated ( INTEGER supportsReboot );
        delegate FUNCTION DeviceLicenseUpdated ( );
        delegate FUNCTION DeviceLicenseSupportsUpdated ( INTEGER supportsDeviceLicense );
        delegate FUNCTION RxOutDelegate ( SIMPLSHARPSTRING message );
        delegate FUNCTION CustomIrCommandSupportsDelegate ( );
        delegate FUNCTION DriverCustomCommandDelegate ( );

        // class events

        // class functions
        FUNCTION SimplInitialize ( STRING filename , STRING ipAddress , INTEGER port , INTEGER enableLogging , INTEGER useDefaultDirectory );
        FUNCTION RegisterParentModule ( STRING parentModuleId );
        FUNCTION SimplOverrideUsername ( STRING username );
        FUNCTION SimplOverridePassword ( STRING password );
        FUNCTION SimplMuteAllChannels ();
        FUNCTION SimplUnmuteAllChannels ();
        FUNCTION SimplMuteAllInputChannels ();
        FUNCTION SimplUnmuteAllInputChannels ();
        FUNCTION SimplMuteAllOutputChannels ();
        FUNCTION SimplUnmuteAllOutputChannels ();
        FUNCTION SimplRebootDevice ();
        FUNCTION SimplDefaultsReset ();
        FUNCTION SimplFactoryReset ();
        FUNCTION SimplRecallPreset ( INTEGER simplIndex );
        SIMPLSHARPSTRING_FUNCTION GetPresetName ( INTEGER simplIndex );
        INTEGER_FUNCTION GetPresetSupportsIsActive ( INTEGER simplIndex );
        INTEGER_FUNCTION GetPresetIsActiveState ( INTEGER simplIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetDeviceId ( INTEGER simplIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetLicenseKey ( INTEGER simplIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetLicenseExpirationDate ( INTEGER simplIndex );
        INTEGER_FUNCTION SimplGetLicenseStatus ( INTEGER simplIndex );
        SIMPLSHARPSTRING_FUNCTION SimplGetLicenseFeature ( INTEGER licenseIndex , INTEGER featureIndex );
        FUNCTION Initialize ( STRING filename , SIGNED_LONG_INTEGER id , STRING ipAddress , SIGNED_LONG_INTEGER port );
        STRING_FUNCTION SimplSetComportSpec ( INTEGER comPort );
        FUNCTION ReceiveData ( STRING message );
        FUNCTION SimplEnableLogging ();
        FUNCTION SimplDisableLogging ();
        FUNCTION SimplEnableTxDebug ();
        FUNCTION SimplDisableTxDebug ();
        FUNCTION SimplEnableRxDebug ();
        FUNCTION SimplDisableRxDebug ();
        FUNCTION SimplDisconnect ();
        FUNCTION SimplReconnect ();
        FUNCTION SimplConnect ();
        FUNCTION SimplEnableRxOut ();
        FUNCTION SimplDisableRxOut ();
        FUNCTION SimplSendCustomCommand ( STRING message );
        FUNCTION SimplSendCustomCommandByName ( STRING commandName );
        FUNCTION SimplSendCustomCommandByValue ( STRING value );
        FUNCTION SimplTriggerCustomCommand ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandPress ( STRING commandName );
        FUNCTION SimplTriggerCustomCommandRelease ( STRING commandName );
        INTEGER_FUNCTION SimplCustomCommandExists ( STRING commandName );
        FUNCTION SimplCustomCommandPageUp ();
        FUNCTION SimplCustomCommandPageDown ();
        FUNCTION SetDriverCustomCommands ();
        FUNCTION UpdateCustomCommands ( SIMPLSHARPSTRING labels[] , INTEGER curPage );
        FUNCTION SimplSetStringUserAttribute ( INTEGER index , STRING value );
        FUNCTION SimplSetAnalogUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplSetDigitalUserAttribute ( INTEGER index , INTEGER value );
        FUNCTION SimplRegisterWithCloud ( SIMPLSHARPSTRING uniqueId );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER UserAttributeIsAvailable[];
        INTEGER UserAttributeDataTypes[];
        INTEGER UserAttributeTypes[];
        STRING UserAttributeLabels[][];
        INTEGER UserAttributeIsPersistent[];
        INTEGER UserAttributeRequiredForConnection[];
        STRING UserAttributeDescriptions[][];
        SIMPLSHARPSTRING SimplCustomCommandNames[][];
        INTEGER SimplNumPages;
        INTEGER SimplNumCustomCommands;
        INTEGER SimplCurrentPage;

        // class properties
        DelegateProperty BasicInformationDelegate BasicInformationUpdate;
        DelegateProperty TxUpdatedDelegate TxUpdate;
        DelegateProperty PacketTxUpdatedDelegate PacketTxUpdate;
        DelegateProperty LogDelegate LogOutUpdate;
        DelegateProperty BasicConnectionSupportsDelegate BasicConnectionSupportsUpdate;
        DelegateProperty DriverLoadedDelegate DriverLoadedUpdate;
        DelegateProperty DriverAuthenticationSupportsDelegate DriverAuthenticationSupportsUpdate;
        DelegateProperty DriverAuthenticationUpdateDelegate DriverAuthenticationUpdateUpdate;
        DelegateProperty DriverCloudStatusDelegate DriverCloudStatusUpdate;
        DelegateProperty InputChannelsUpdated InputChannelsUpdate;
        DelegateProperty PresetInformationUpdated PresetInformationUpdate;
        DelegateProperty DeviceInformationSupportsUpdated DeviceInformationSupportsUpdate;
        DelegateProperty DeviceUptimeUpdated DeviceUptimeUpdate;
        DelegateProperty DeviceFirmwareVesionUpdated DeviceFirmwareVesionUpdate;
        DelegateProperty PresetActivityUpdated PresetActivityUpdate;
        DelegateProperty ConnectionStateUpdated ConnectionStateUpdate;
        DelegateProperty NumberOfAssociatedDevicesUpdated NumberOfAssociatedDevicesUpdate;
        DelegateProperty RebootSupportsUpdated RebootSupportsUpdate;
        DelegateProperty DeviceLicenseUpdated DeviceLicenseUpdate;
        DelegateProperty DeviceLicenseSupportsUpdated DeviceLicenseSupportsUpdate;
        DelegateProperty TxUpdatedDelegate InternalTxUpdated;
        DelegateProperty PacketTxUpdatedDelegate InternalPacketTxUpdated;
        DelegateProperty LogDelegate InternalLogOut;
        DelegateProperty RxOutDelegate InternalRxOut;
        DelegateProperty BasicConnectionSupportsDelegate InternalBasicConnectionSupportsUpdated;
        DelegateProperty CustomIrCommandSupportsDelegate InternalCustomIrCommandSupportsUpdatead;
        DelegateProperty DriverLoadedDelegate InternalDriverLoadedCallback;
        DelegateProperty DriverAuthenticationSupportsDelegate InternalDriverAuthenticationSupportsCallback;
        DelegateProperty DriverAuthenticationUpdateDelegate InternalDriverAuthenticationUpdateCallback;
        DelegateProperty DriverCustomCommandDelegate InternalDriverCustomCommandCallback;
        DelegateProperty DriverCloudStatusDelegate InternalDriverCloudStatusCallback;
        STRING ApplicationDirectory[];
        STRING InterfaceName[];
    };

     class SimplAudioMixerAncillaryDevice 
    {
        // class delegates
        delegate FUNCTION ModuleRegistrationUpdated ( INTEGER registered );
        delegate FUNCTION DeviceDiscoveredUpdated ( INTEGER discovered );
        delegate FUNCTION DeviceInformationSupportsUpdated ( INTEGER supportUptime , INTEGER supportsFirmware , INTEGER supportsDefaultsReset , INTEGER supportsFactoryReset );
        delegate FUNCTION DeviceUptimeUpdated ( SIMPLSHARPSTRING uptime );
        delegate FUNCTION DeviceFirmwareVesionUpdated ( SIMPLSHARPSTRING version );
        delegate FUNCTION DeviceInformationUpdated ( SIMPLSHARPSTRING manufacturer , SIMPLSHARPSTRING model );
        delegate FUNCTION DeviceConnectionUpdated ( INTEGER connected );
        delegate FUNCTION DeviceNameUpdated ( SIMPLSHARPSTRING name );
        delegate FUNCTION RebootSupportsUpdated ( INTEGER supportsReboot );
        delegate FUNCTION DeviceIdentificationSupportsUpdated ( INTEGER identify , INTEGER startStop , INTEGER feedbcak );
        delegate FUNCTION DeviceIdentificationUpdated ( INTEGER identifying );

        // class events

        // class functions
        FUNCTION RegisterAncillaryDeviceModule ( STRING parentModuleId );
        FUNCTION SimplRebootDevice ();
        FUNCTION SimplDefaultsReset ();
        FUNCTION SimplFactoryReset ();
        FUNCTION SimplSetDeviceId ( STRING deviceId );
        FUNCTION SimplIdentify ();
        FUNCTION SimplStartIdentify ();
        FUNCTION SimplStopIdentify ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty ModuleRegistrationUpdated ModuleRegistrationUpdate;
        DelegateProperty DeviceDiscoveredUpdated DeviceDiscoveredUpdate;
        DelegateProperty DeviceInformationSupportsUpdated DeviceInformationSupportsUpdate;
        DelegateProperty DeviceUptimeUpdated DeviceUptimeUpdate;
        DelegateProperty DeviceFirmwareVesionUpdated DeviceFirmwareVesionUpdate;
        DelegateProperty DeviceInformationUpdated DeviceInformationUpdate;
        DelegateProperty DeviceConnectionUpdated DeviceConnectionUpdate;
        DelegateProperty DeviceNameUpdated DeviceNameUpdate;
        DelegateProperty RebootSupportsUpdated RebootSupportsUpdate;
        DelegateProperty DeviceIdentificationSupportsUpdated DeviceIdentificationSupportsUpdate;
        DelegateProperty DeviceIdentificationUpdated DeviceIdentificationUpdate;
    };

     class SimplAudioMixerChannel 
    {
        // class delegates
        delegate FUNCTION ModuleRegistrationUpdated ( INTEGER registered );
        delegate FUNCTION IdUpdated ( SIMPLSHARPSTRING value );
        delegate FUNCTION NameUpdated ( SIMPLSHARPSTRING value );
        delegate FUNCTION DbLimitsUpdated ( SIMPLSHARPSTRING upperLimit , SIMPLSHARPSTRING lowerLimit , SIMPLSHARPSTRING stepSize );
        delegate FUNCTION SignalPresentUpdated ( INTEGER value );
        delegate FUNCTION SignalClippingUpdated ( INTEGER value );
        delegate FUNCTION IsLineLevelUpdated ( INTEGER value );
        delegate FUNCTION MutedUpdated ( INTEGER value );
        delegate FUNCTION LevelUpdated ( SIMPLSHARPSTRING dbValue , INTEGER percentValue , INTEGER simplValue );
        delegate FUNCTION ConnecterUpdated ( SIMPLSHARPSTRING sConnecterName , INTEGER iConnecterIsPhysical );
        delegate FUNCTION SupportsUpdated ( INTEGER supportsLevelFeedback , INTEGER supportsSetLevel , INTEGER supportsMuteFeedback , INTEGER supportsSetMute , INTEGER supportsDb , INTEGER supportsSignalPresent , INTEGER supportsSignalClipping , INTEGER supportsIsLineLevel );

        // class events

        // class functions
        FUNCTION RegisterChannelModule ( STRING parentModuleId , INTEGER channelDirection , INTEGER channelNumber );
        FUNCTION SimplMute ();
        FUNCTION SimplUnmute ();
        FUNCTION SimplSetPercentLevel ( INTEGER percentLevel );
        FUNCTION SimplSetSimplLevel ( INTEGER simplLevel );
        FUNCTION SimplPressVolumeUp ();
        FUNCTION SimplReleaseVolumeUp ();
        FUNCTION SimplPressVolumeDown ();
        FUNCTION SimplReleaseVolumeDown ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty ModuleRegistrationUpdated ModuleRegistrationUpdate;
        DelegateProperty IdUpdated IdUpdate;
        DelegateProperty NameUpdated NameUpdate;
        DelegateProperty DbLimitsUpdated DbLimitsUpdate;
        DelegateProperty SignalPresentUpdated SignalPresentUpdate;
        DelegateProperty SignalClippingUpdated SignalClippingUpdate;
        DelegateProperty IsLineLevelUpdated IsLineLevelUpdate;
        DelegateProperty MutedUpdated MutedUpdate;
        DelegateProperty LevelUpdated LevelUpdate;
        DelegateProperty ConnecterUpdated ConnecterUpdate;
        DelegateProperty SupportsUpdated SupportsUpdate;
        INTEGER SimplInputChannelDirection;
        INTEGER SimplOutputChannelDirection;
    };

     class SimplAudioMixerCrosspointGain 
    {
        // class delegates
        delegate FUNCTION GainUpdated ( INTEGER simplValue , INTEGER percentValue , SIMPLSHARPSTRING dbValue );
        delegate FUNCTION DbLimitsUpdated ( SIMPLSHARPSTRING upperLimit , SIMPLSHARPSTRING lowerLimit , SIMPLSHARPSTRING stepSize );
        delegate FUNCTION ModuleRegistrationUpdated ( INTEGER registered );

        // class events

        // class functions
        FUNCTION RegisterCrosspointModule ( STRING parentModuleId , INTEGER inputNumber , INTEGER outputNumber );
        FUNCTION SimplSetSimplValue ( INTEGER value );
        FUNCTION SimplSetPercentValue ( INTEGER value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty GainUpdated GainUpdate;
        DelegateProperty DbLimitsUpdated DbLimitsUpdate;
        DelegateProperty ModuleRegistrationUpdated ModuleRegistrationUpdate;
    };

     class SimplPowerBank 
    {
        // class delegates
        delegate FUNCTION ModuleRegistrationUpdated ( INTEGER registered );
        delegate FUNCTION IntegerUpdatedDelegate ( INTEGER value );
        delegate FUNCTION PowerControlSupports ( INTEGER group , INTEGER onOff , INTEGER toggle , INTEGER isOn , INTEGER cylclePower , INTEGER cyclePowerDelay , INTEGER powerOnDelay , INTEGER controlMode , INTEGER fullControlMode , INTEGER cycleOnlyMode );
        delegate FUNCTION PowerMeteringSupports ( INTEGER group , INTEGER amperage , INTEGER voltage , INTEGER frequency , INTEGER power , INTEGER enegryConsumption , INTEGER resetEnergyConsumption , INTEGER currentTemperature , INTEGER humidity );
        delegate FUNCTION PowerFaultSupports ( INTEGER group , INTEGER underVoltageThreshold , INTEGER underVoltageFault , INTEGER overVoltageThreshold , INTEGER overVoltage , INTEGER overCurrentThreshold , INTEGER overCurrent , INTEGER overTemperatureThreshold , INTEGER overTemperature , INTEGER overHumidityThreshold , INTEGER overHumidity , INTEGER surgeProtectionCompromised , INTEGER wiringFault , INTEGER surgeDetected );
        delegate FUNCTION PingDeviceMonitoringSupports ( INTEGER group , INTEGER setRebootMode , INTEGER PingTimeout , INTEGER pingRetries , INTEGER pingInterval , INTEGER pingDelay , INTEGER rebootAttempts , INTEGER failingPingAttempts );
        delegate FUNCTION PowerBankNameSupports ( INTEGER setName , INTEGER getName );
        delegate FUNCTION StringUpdatedDelegate ( SIMPLSHARPSTRING value );

        // class events

        // class functions
        FUNCTION SimplSetName ( SIMPLSHARPSTRING value );
        FUNCTION SimplSetPowerOnSequenceNumber ( INTEGER value );
        FUNCTION SimplEnableDeviceMonitoring ();
        FUNCTION SimplDisableDeviceMonitoring ();
        FUNCTION SimplClearPingTargets ();
        FUNCTION SimplSetRebootMode_AnyOffline ();
        FUNCTION SimplSetRebootMode_AllOffline ();
        FUNCTION SimplSetPingTimeout ( INTEGER value );
        FUNCTION SimplSetPingRetries ( INTEGER value );
        FUNCTION SimplSetPingInterval ( INTEGER value );
        FUNCTION SimplSetPingDelay ( INTEGER value );
        FUNCTION SimplSetRebootAttempts ( INTEGER value );
        FUNCTION SimplSetPingTarget ( INTEGER index , STRING value );
        SIMPLSHARPSTRING_FUNCTION SimplGetPingTarget ( INTEGER index );
        FUNCTION SimplOn ();
        FUNCTION SimplOff ();
        FUNCTION SimplToggle ();
        FUNCTION SimplCyclePower ();
        FUNCTION SimplSetCyclePowerDelay ( INTEGER value );
        FUNCTION SimplSetPowerOnDelay ( INTEGER value );
        FUNCTION SimplSetFullControlMode ();
        FUNCTION SimplSetCycleOnlyMode ();
        FUNCTION SimplResetEnergyConsumption ();
        FUNCTION SimplSetUnderVoltageThreshold ( SIMPLSHARPSTRING value );
        FUNCTION SimplSetOverVoltageThreshold ( SIMPLSHARPSTRING value );
        FUNCTION SimplSetOverCurrentThreshold ( SIMPLSHARPSTRING value );
        FUNCTION SimplSetOverTemperatureThreshold ( SIMPLSHARPSTRING value , INTEGER unit );
        FUNCTION SimplSetOverHumidityThreshold ( SIMPLSHARPSTRING value );
        FUNCTION RegisterPowerBankModule ( STRING parentModuleId , INTEGER powerBankNumber );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty ModuleRegistrationUpdated ModuleRegistrationUpdate;
        DelegateProperty IntegerUpdatedDelegate ConnectedWithDeviceUpdate;
        DelegateProperty PowerControlSupports PowerControlSupportsUpdate;
        DelegateProperty PowerMeteringSupports PowerMeteringSupportsUpdate;
        DelegateProperty PowerFaultSupports PowerFaultSupportsUpdate;
        DelegateProperty PingDeviceMonitoringSupports PingDeviceMonitoringSupportsUpdate;
        DelegateProperty PowerBankNameSupports PowerBankNameSupportsUpdate;
        DelegateProperty StringUpdatedDelegate NameUpdate;
        DelegateProperty StringUpdatedDelegate LabelUpdate;
        DelegateProperty IntegerUpdatedDelegate NumberUpdate;
        DelegateProperty IntegerUpdatedDelegate NumberOfLoadsUpdate;
        DelegateProperty IntegerUpdatedDelegate IsOnUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayMinUpdate;
        DelegateProperty IntegerUpdatedDelegate CyclePowerDelayMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayMinUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnDelayMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate InFullControlModeUpdate;
        DelegateProperty IntegerUpdatedDelegate InCycleOnlyModeUpdate;
        DelegateProperty StringUpdatedDelegate AmperageUpdate;
        DelegateProperty StringUpdatedDelegate VoltageUpdate;
        DelegateProperty StringUpdatedDelegate FrequencyUpdate;
        DelegateProperty StringUpdatedDelegate PowerValueUpdate;
        DelegateProperty StringUpdatedDelegate EnergyConsumptionUpdate;
        DelegateProperty StringUpdatedDelegate CurrentTemperatureUpdate;
        DelegateProperty IntegerUpdatedDelegate CurrentTemperatureUnitsUpdate;
        DelegateProperty IntegerUpdatedDelegate CurrentTemperatureAvailableUpdate;
        DelegateProperty StringUpdatedDelegate HumidityUpdate;
        DelegateProperty IntegerUpdatedDelegate HumidityAvailableUpdate;
        DelegateProperty IntegerUpdatedDelegate DisabledByFaultUpdate;
        DelegateProperty StringUpdatedDelegate UnderVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate UnderVoltageUpdate;
        DelegateProperty StringUpdatedDelegate OverVoltageThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverVoltageUpdate;
        DelegateProperty StringUpdatedDelegate OverCurrentThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverCurrentUpdate;
        DelegateProperty StringUpdatedDelegate OverTemperatureThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverTemperatureThresholdUnitsUpdate;
        DelegateProperty IntegerUpdatedDelegate OverTemperatureUpdate;
        DelegateProperty StringUpdatedDelegate OverHumidityThresholdUpdate;
        DelegateProperty IntegerUpdatedDelegate OverHumidityUpdate;
        DelegateProperty IntegerUpdatedDelegate SurgeDetectedUpdate;
        DelegateProperty IntegerUpdatedDelegate SurgeProtectionCompromisedUpdate;
        DelegateProperty IntegerUpdatedDelegate WiringFaultUpdate;
        DelegateProperty IntegerUpdatedDelegate DeviceMonitoringEnabledUpdate;
        DelegateProperty IntegerUpdatedDelegate NumberOfTargetsSupportedUpdate;
        DelegateProperty IntegerUpdatedDelegate RebootModeIs_AnyOfflineUpdate;
        DelegateProperty IntegerUpdatedDelegate RebootModelIs_AllOfflineUpdate;
        DelegateProperty IntegerUpdatedDelegate PingTimeoutUpdate;
        DelegateProperty IntegerUpdatedDelegate PingTimeoutMinUpdate;
        DelegateProperty IntegerUpdatedDelegate PingTimeoutMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate PingRetriesUpdate;
        DelegateProperty IntegerUpdatedDelegate PingRetriesMinUpdate;
        DelegateProperty IntegerUpdatedDelegate PingRetriesMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate PingIntervalUpdate;
        DelegateProperty IntegerUpdatedDelegate PingIntervalMinUpdate;
        DelegateProperty IntegerUpdatedDelegate PingIntervalMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate PingDelayUpdate;
        DelegateProperty IntegerUpdatedDelegate PingDelayMinUpdate;
        DelegateProperty IntegerUpdatedDelegate PingDelayMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate RebootAttemptsUpdate;
        DelegateProperty IntegerUpdatedDelegate RebootAttemptsMinUpdate;
        DelegateProperty IntegerUpdatedDelegate RebootAttempsMaxUpdate;
        DelegateProperty IntegerUpdatedDelegate FailedPingAttemptsUpdate;
        DelegateProperty IntegerUpdatedDelegate PingTargetsUpdate;
        DelegateProperty IntegerUpdatedDelegate PowerOnSequenceUpdate;
    };

namespace RADCommon.Devices.Gateway.Interfaces;
        // class declarations

namespace RADCommon.Interfaces;
        // class declarations

namespace RADCommon.Devices;
        // class declarations

namespace Crestron.RAD.Common.SIMPLSupport;
        // class declarations

namespace RADCommon.Devices.SecuritySystem.Interfaces;
        // class declarations

