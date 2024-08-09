using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace UserModule_ROOM_OFF_HELPER
{
    public class UserModuleClass_ROOM_OFF_HELPER : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        ushort X = 0;
        Crestron.Logos.SplusObjects.DigitalInput POWER_OFF_CONFIRM;
        Crestron.Logos.SplusObjects.DigitalInput CURRENT_ROOM_OFF;
        InOutArray<Crestron.Logos.SplusObjects.DigitalInput> ROOM_OFF;
        Crestron.Logos.SplusObjects.StringInput CURRENT_ROOM_NAME__DOLLAR__;
        InOutArray<Crestron.Logos.SplusObjects.StringInput> ROOM_NAMES__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput ZONE_TO_POWER_DOWN__DOLLAR__;
        Crestron.Logos.SplusObjects.DigitalOutput CURRENT_ROOM_OFF_GO;
        InOutArray<Crestron.Logos.SplusObjects.DigitalOutput> ROOM_OFF_GO;
        object CURRENT_ROOM_OFF_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 23;
                X = (ushort) ( 0 ) ; 
                __context__.SourceCodeLine = 25;
                ZONE_TO_POWER_DOWN__DOLLAR__  .UpdateValue ( CURRENT_ROOM_NAME__DOLLAR__  ) ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object ROOM_OFF_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 30;
            X = (ushort) ( Functions.GetLastModifiedArrayIndex( __SignalEventArg__ ) ) ; 
            __context__.SourceCodeLine = 32;
            ZONE_TO_POWER_DOWN__DOLLAR__  .UpdateValue ( ROOM_NAMES__DOLLAR__ [ X ]  ) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
object POWER_OFF_CONFIRM_OnPush_2 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 37;
        if ( Functions.TestForTrue  ( ( Functions.BoolToInt (X == 0))  ) ) 
            {
            __context__.SourceCodeLine = 37;
            Functions.Pulse ( 1, CURRENT_ROOM_OFF_GO ) ; 
            }
        
        else 
            { 
            __context__.SourceCodeLine = 40;
            Functions.Pulse ( 1, ROOM_OFF_GO [ X] ) ; 
            } 
        
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}


public override void LogosSplusInitialize()
{
    _SplusNVRAM = new SplusNVRAM( this );
    
    POWER_OFF_CONFIRM = new Crestron.Logos.SplusObjects.DigitalInput( POWER_OFF_CONFIRM__DigitalInput__, this );
    m_DigitalInputList.Add( POWER_OFF_CONFIRM__DigitalInput__, POWER_OFF_CONFIRM );
    
    CURRENT_ROOM_OFF = new Crestron.Logos.SplusObjects.DigitalInput( CURRENT_ROOM_OFF__DigitalInput__, this );
    m_DigitalInputList.Add( CURRENT_ROOM_OFF__DigitalInput__, CURRENT_ROOM_OFF );
    
    ROOM_OFF = new InOutArray<DigitalInput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        ROOM_OFF[i+1] = new Crestron.Logos.SplusObjects.DigitalInput( ROOM_OFF__DigitalInput__ + i, ROOM_OFF__DigitalInput__, this );
        m_DigitalInputList.Add( ROOM_OFF__DigitalInput__ + i, ROOM_OFF[i+1] );
    }
    
    CURRENT_ROOM_OFF_GO = new Crestron.Logos.SplusObjects.DigitalOutput( CURRENT_ROOM_OFF_GO__DigitalOutput__, this );
    m_DigitalOutputList.Add( CURRENT_ROOM_OFF_GO__DigitalOutput__, CURRENT_ROOM_OFF_GO );
    
    ROOM_OFF_GO = new InOutArray<DigitalOutput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        ROOM_OFF_GO[i+1] = new Crestron.Logos.SplusObjects.DigitalOutput( ROOM_OFF_GO__DigitalOutput__ + i, this );
        m_DigitalOutputList.Add( ROOM_OFF_GO__DigitalOutput__ + i, ROOM_OFF_GO[i+1] );
    }
    
    CURRENT_ROOM_NAME__DOLLAR__ = new Crestron.Logos.SplusObjects.StringInput( CURRENT_ROOM_NAME__DOLLAR____AnalogSerialInput__, 30, this );
    m_StringInputList.Add( CURRENT_ROOM_NAME__DOLLAR____AnalogSerialInput__, CURRENT_ROOM_NAME__DOLLAR__ );
    
    ROOM_NAMES__DOLLAR__ = new InOutArray<StringInput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        ROOM_NAMES__DOLLAR__[i+1] = new Crestron.Logos.SplusObjects.StringInput( ROOM_NAMES__DOLLAR____AnalogSerialInput__ + i, ROOM_NAMES__DOLLAR____AnalogSerialInput__, 30, this );
        m_StringInputList.Add( ROOM_NAMES__DOLLAR____AnalogSerialInput__ + i, ROOM_NAMES__DOLLAR__[i+1] );
    }
    
    ZONE_TO_POWER_DOWN__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( ZONE_TO_POWER_DOWN__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( ZONE_TO_POWER_DOWN__DOLLAR____AnalogSerialOutput__, ZONE_TO_POWER_DOWN__DOLLAR__ );
    
    
    CURRENT_ROOM_OFF.OnDigitalPush.Add( new InputChangeHandlerWrapper( CURRENT_ROOM_OFF_OnPush_0, false ) );
    for( uint i = 0; i < 10; i++ )
        ROOM_OFF[i+1].OnDigitalPush.Add( new InputChangeHandlerWrapper( ROOM_OFF_OnPush_1, false ) );
        
    POWER_OFF_CONFIRM.OnDigitalPush.Add( new InputChangeHandlerWrapper( POWER_OFF_CONFIRM_OnPush_2, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_ROOM_OFF_HELPER ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint POWER_OFF_CONFIRM__DigitalInput__ = 0;
const uint CURRENT_ROOM_OFF__DigitalInput__ = 1;
const uint ROOM_OFF__DigitalInput__ = 2;
const uint CURRENT_ROOM_NAME__DOLLAR____AnalogSerialInput__ = 0;
const uint ROOM_NAMES__DOLLAR____AnalogSerialInput__ = 1;
const uint ZONE_TO_POWER_DOWN__DOLLAR____AnalogSerialOutput__ = 0;
const uint CURRENT_ROOM_OFF_GO__DigitalOutput__ = 0;
const uint ROOM_OFF_GO__DigitalOutput__ = 1;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    
}

SplusNVRAM _SplusNVRAM = null;

public class __CEvent__ : CEvent
{
    public __CEvent__() {}
    public void Close() { base.Close(); }
    public int Reset() { return base.Reset() ? 1 : 0; }
    public int Set() { return base.Set() ? 1 : 0; }
    public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
}
public class __CMutex__ : CMutex
{
    public __CMutex__() {}
    public void Close() { base.Close(); }
    public void ReleaseMutex() { base.ReleaseMutex(); }
    public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
}
 public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
