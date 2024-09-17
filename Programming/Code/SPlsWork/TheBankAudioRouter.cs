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

namespace UserModule_THEBANKAUDIOROUTER
{
    public class UserModuleClass_THEBANKAUDIOROUTER : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        
        InOutArray<Crestron.Logos.SplusObjects.DigitalInput> TXROOMSELECT;
        InOutArray<Crestron.Logos.SplusObjects.DigitalInput> RXROOMPRESS;
        InOutArray<Crestron.Logos.SplusObjects.DigitalOutput> RXROOMBTNENABLED;
        InOutArray<Crestron.Logos.SplusObjects.DigitalOutput> RXROOMCONNECTED;
        InOutArray<Crestron.Logos.SplusObjects.AnalogInput> RXROOMCURRENTSOURCE;
        InOutArray<Crestron.Logos.SplusObjects.AnalogOutput> RXROOMSOURCE;
        InOutArray<Crestron.Logos.SplusObjects.StringInput> RXROOMMULTICASTADDRESS_FB;
        InOutArray<Crestron.Logos.SplusObjects.StringOutput> RXROOMMULTICASTADDRESS;
        ushort X = 0;
        ushort I = 0;
        ushort J = 0;
        ushort _CURRENTLYSELECTEDROOM = 0;
        ushort [] _PREVIOUSSOURCE;
        ushort [] _MASTERROOM;
        private void CLEARCONNECTION (  SplusExecutionContext __context__, ushort ROOMNUM ) 
            { 
            
            __context__.SourceCodeLine = 25;
            _MASTERROOM [ ROOMNUM] = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 26;
            RXROOMSOURCE [ ROOMNUM]  .Value = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 27;
            RXROOMMULTICASTADDRESS [ ROOMNUM]  .UpdateValue ( "0.0.0.0"  ) ; 
            
            }
            
        private void UPDATERECEIVINGROOMS (  SplusExecutionContext __context__, ushort ROOMNUM ) 
            { 
            
            __context__.SourceCodeLine = 32;
            ushort __FN_FORSTART_VAL__1 = (ushort) ( 1 ) ;
            ushort __FN_FOREND_VAL__1 = (ushort)10; 
            int __FN_FORSTEP_VAL__1 = (int)1; 
            for ( J  = __FN_FORSTART_VAL__1; (__FN_FORSTEP_VAL__1 > 0)  ? ( (J  >= __FN_FORSTART_VAL__1) && (J  <= __FN_FOREND_VAL__1) ) : ( (J  <= __FN_FORSTART_VAL__1) && (J  >= __FN_FOREND_VAL__1) ) ; J  += (ushort)__FN_FORSTEP_VAL__1) 
                { 
                __context__.SourceCodeLine = 34;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (ROOMNUM == _MASTERROOM[ J ]) ) && Functions.TestForTrue ( Functions.BoolToInt (RXROOMCURRENTSOURCE[ ROOMNUM ] .UshortValue == 0) )) ) ) && Functions.TestForTrue ( Functions.BoolToInt (RXROOMCURRENTSOURCE[ J ] .UshortValue == _PREVIOUSSOURCE[ ROOMNUM ]) )) ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 40;
                    CLEARCONNECTION (  __context__ , (ushort)( J )) ; 
                    } 
                
                __context__.SourceCodeLine = 32;
                } 
            
            
            }
            
        private void UPDATEROOMSTATES (  SplusExecutionContext __context__, ushort ROOMNUM ) 
            { 
            
            __context__.SourceCodeLine = 47;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (_MASTERROOM[ ROOMNUM ] == _CURRENTLYSELECTEDROOM) ) && Functions.TestForTrue ( Functions.BoolToInt (RXROOMCURRENTSOURCE[ ROOMNUM ] .UshortValue == RXROOMCURRENTSOURCE[ _CURRENTLYSELECTEDROOM ] .UshortValue) )) ) ) && Functions.TestForTrue ( Functions.BoolToInt (RXROOMCURRENTSOURCE[ ROOMNUM ] .UshortValue != 0) )) ))  ) ) 
                { 
                __context__.SourceCodeLine = 53;
                RXROOMCONNECTED [ ROOMNUM]  .Value = (ushort) ( 1 ) ; 
                } 
            
            else 
                { 
                __context__.SourceCodeLine = 57;
                RXROOMCONNECTED [ ROOMNUM]  .Value = (ushort) ( 0 ) ; 
                } 
            
            __context__.SourceCodeLine = 60;
            UPDATERECEIVINGROOMS (  __context__ , (ushort)( ROOMNUM )) ; 
            
            }
            
        object TXROOMSELECT_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 65;
                _CURRENTLYSELECTEDROOM = (ushort) ( Functions.GetLastModifiedArrayIndex( __SignalEventArg__ ) ) ; 
                __context__.SourceCodeLine = 67;
                ushort __FN_FORSTART_VAL__1 = (ushort) ( 1 ) ;
                ushort __FN_FOREND_VAL__1 = (ushort)10; 
                int __FN_FORSTEP_VAL__1 = (int)1; 
                for ( I  = __FN_FORSTART_VAL__1; (__FN_FORSTEP_VAL__1 > 0)  ? ( (I  >= __FN_FORSTART_VAL__1) && (I  <= __FN_FOREND_VAL__1) ) : ( (I  <= __FN_FORSTART_VAL__1) && (I  >= __FN_FOREND_VAL__1) ) ; I  += (ushort)__FN_FORSTEP_VAL__1) 
                    { 
                    __context__.SourceCodeLine = 69;
                    UPDATEROOMSTATES (  __context__ , (ushort)( I )) ; 
                    __context__.SourceCodeLine = 70;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (I != _CURRENTLYSELECTEDROOM))  ) ) 
                        {
                        __context__.SourceCodeLine = 70;
                        RXROOMBTNENABLED [ I]  .Value = (ushort) ( 1 ) ; 
                        }
                    
                    else 
                        {
                        __context__.SourceCodeLine = 71;
                        RXROOMBTNENABLED [ I]  .Value = (ushort) ( 0 ) ; 
                        }
                    
                    __context__.SourceCodeLine = 67;
                    } 
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object RXROOMPRESS_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 77;
            X = (ushort) ( Functions.GetLastModifiedArrayIndex( __SignalEventArg__ ) ) ; 
            __context__.SourceCodeLine = 79;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (RXROOMCURRENTSOURCE[ X ] .UshortValue == RXROOMCURRENTSOURCE[ _CURRENTLYSELECTEDROOM ] .UshortValue) ) && Functions.TestForTrue ( Functions.BoolToInt (_MASTERROOM[ X ] == _CURRENTLYSELECTEDROOM) )) ))  ) ) 
                { 
                __context__.SourceCodeLine = 84;
                CLEARCONNECTION (  __context__ , (ushort)( X )) ; 
                } 
            
            else 
                { 
                __context__.SourceCodeLine = 88;
                _MASTERROOM [ X] = (ushort) ( _CURRENTLYSELECTEDROOM ) ; 
                __context__.SourceCodeLine = 89;
                RXROOMSOURCE [ X]  .Value = (ushort) ( RXROOMCURRENTSOURCE[ _CURRENTLYSELECTEDROOM ] .UshortValue ) ; 
                __context__.SourceCodeLine = 90;
                RXROOMMULTICASTADDRESS [ X]  .UpdateValue ( RXROOMMULTICASTADDRESS_FB [ _CURRENTLYSELECTEDROOM ]  ) ; 
                } 
            
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
object RXROOMCURRENTSOURCE_OnChange_2 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 97;
        X = (ushort) ( Functions.GetLastModifiedArrayIndex( __SignalEventArg__ ) ) ; 
        __context__.SourceCodeLine = 98;
        UPDATEROOMSTATES (  __context__ , (ushort)( X )) ; 
        __context__.SourceCodeLine = 99;
        _PREVIOUSSOURCE [ X] = (ushort) ( RXROOMCURRENTSOURCE[ X ] .UshortValue ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

public override object FunctionMain (  object __obj__ ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusFunctionMainStartCode();
        
        __context__.SourceCodeLine = 104;
        WaitForInitializationComplete ( ) ; 
        __context__.SourceCodeLine = 106;
        ushort __FN_FORSTART_VAL__1 = (ushort) ( 1 ) ;
        ushort __FN_FOREND_VAL__1 = (ushort)10; 
        int __FN_FORSTEP_VAL__1 = (int)1; 
        for ( I  = __FN_FORSTART_VAL__1; (__FN_FORSTEP_VAL__1 > 0)  ? ( (I  >= __FN_FORSTART_VAL__1) && (I  <= __FN_FOREND_VAL__1) ) : ( (I  <= __FN_FORSTART_VAL__1) && (I  >= __FN_FOREND_VAL__1) ) ; I  += (ushort)__FN_FORSTEP_VAL__1) 
            { 
            __context__.SourceCodeLine = 108;
            _PREVIOUSSOURCE [ I] = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 109;
            _MASTERROOM [ I] = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 106;
            } 
        
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler(); }
    return __obj__;
    }
    

public override void LogosSplusInitialize()
{
    _SplusNVRAM = new SplusNVRAM( this );
    _PREVIOUSSOURCE  = new ushort[ 11 ];
    _MASTERROOM  = new ushort[ 11 ];
    
    TXROOMSELECT = new InOutArray<DigitalInput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        TXROOMSELECT[i+1] = new Crestron.Logos.SplusObjects.DigitalInput( TXROOMSELECT__DigitalInput__ + i, TXROOMSELECT__DigitalInput__, this );
        m_DigitalInputList.Add( TXROOMSELECT__DigitalInput__ + i, TXROOMSELECT[i+1] );
    }
    
    RXROOMPRESS = new InOutArray<DigitalInput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        RXROOMPRESS[i+1] = new Crestron.Logos.SplusObjects.DigitalInput( RXROOMPRESS__DigitalInput__ + i, RXROOMPRESS__DigitalInput__, this );
        m_DigitalInputList.Add( RXROOMPRESS__DigitalInput__ + i, RXROOMPRESS[i+1] );
    }
    
    RXROOMBTNENABLED = new InOutArray<DigitalOutput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        RXROOMBTNENABLED[i+1] = new Crestron.Logos.SplusObjects.DigitalOutput( RXROOMBTNENABLED__DigitalOutput__ + i, this );
        m_DigitalOutputList.Add( RXROOMBTNENABLED__DigitalOutput__ + i, RXROOMBTNENABLED[i+1] );
    }
    
    RXROOMCONNECTED = new InOutArray<DigitalOutput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        RXROOMCONNECTED[i+1] = new Crestron.Logos.SplusObjects.DigitalOutput( RXROOMCONNECTED__DigitalOutput__ + i, this );
        m_DigitalOutputList.Add( RXROOMCONNECTED__DigitalOutput__ + i, RXROOMCONNECTED[i+1] );
    }
    
    RXROOMCURRENTSOURCE = new InOutArray<AnalogInput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        RXROOMCURRENTSOURCE[i+1] = new Crestron.Logos.SplusObjects.AnalogInput( RXROOMCURRENTSOURCE__AnalogSerialInput__ + i, RXROOMCURRENTSOURCE__AnalogSerialInput__, this );
        m_AnalogInputList.Add( RXROOMCURRENTSOURCE__AnalogSerialInput__ + i, RXROOMCURRENTSOURCE[i+1] );
    }
    
    RXROOMSOURCE = new InOutArray<AnalogOutput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        RXROOMSOURCE[i+1] = new Crestron.Logos.SplusObjects.AnalogOutput( RXROOMSOURCE__AnalogSerialOutput__ + i, this );
        m_AnalogOutputList.Add( RXROOMSOURCE__AnalogSerialOutput__ + i, RXROOMSOURCE[i+1] );
    }
    
    RXROOMMULTICASTADDRESS_FB = new InOutArray<StringInput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        RXROOMMULTICASTADDRESS_FB[i+1] = new Crestron.Logos.SplusObjects.StringInput( RXROOMMULTICASTADDRESS_FB__AnalogSerialInput__ + i, RXROOMMULTICASTADDRESS_FB__AnalogSerialInput__, 20, this );
        m_StringInputList.Add( RXROOMMULTICASTADDRESS_FB__AnalogSerialInput__ + i, RXROOMMULTICASTADDRESS_FB[i+1] );
    }
    
    RXROOMMULTICASTADDRESS = new InOutArray<StringOutput>( 10, this );
    for( uint i = 0; i < 10; i++ )
    {
        RXROOMMULTICASTADDRESS[i+1] = new Crestron.Logos.SplusObjects.StringOutput( RXROOMMULTICASTADDRESS__AnalogSerialOutput__ + i, this );
        m_StringOutputList.Add( RXROOMMULTICASTADDRESS__AnalogSerialOutput__ + i, RXROOMMULTICASTADDRESS[i+1] );
    }
    
    
    for( uint i = 0; i < 10; i++ )
        TXROOMSELECT[i+1].OnDigitalPush.Add( new InputChangeHandlerWrapper( TXROOMSELECT_OnPush_0, false ) );
        
    for( uint i = 0; i < 10; i++ )
        RXROOMPRESS[i+1].OnDigitalPush.Add( new InputChangeHandlerWrapper( RXROOMPRESS_OnPush_1, false ) );
        
    for( uint i = 0; i < 10; i++ )
        RXROOMCURRENTSOURCE[i+1].OnAnalogChange.Add( new InputChangeHandlerWrapper( RXROOMCURRENTSOURCE_OnChange_2, false ) );
        
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_THEBANKAUDIOROUTER ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint TXROOMSELECT__DigitalInput__ = 0;
const uint RXROOMPRESS__DigitalInput__ = 10;
const uint RXROOMBTNENABLED__DigitalOutput__ = 0;
const uint RXROOMCONNECTED__DigitalOutput__ = 10;
const uint RXROOMCURRENTSOURCE__AnalogSerialInput__ = 0;
const uint RXROOMSOURCE__AnalogSerialOutput__ = 0;
const uint RXROOMMULTICASTADDRESS_FB__AnalogSerialInput__ = 10;
const uint RXROOMMULTICASTADDRESS__AnalogSerialOutput__ = 10;

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
