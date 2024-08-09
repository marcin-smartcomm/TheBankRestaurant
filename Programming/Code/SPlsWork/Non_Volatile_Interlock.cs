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

namespace UserModule_NON_VOLATILE_INTERLOCK
{
    public class UserModuleClass_NON_VOLATILE_INTERLOCK : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        
        Crestron.Logos.SplusObjects.DigitalInput CLEAR_ALL;
        InOutArray<Crestron.Logos.SplusObjects.DigitalInput> DIGITAL_IN;
        InOutArray<Crestron.Logos.SplusObjects.DigitalOutput> DIGITAL_OUT;
        public override object FunctionMain (  object __obj__ ) 
            { 
            try
            {
                SplusExecutionContext __context__ = SplusFunctionMainStartCode();
                
                __context__.SourceCodeLine = 16;
                _SplusNVRAM.READY = (ushort) ( 0 ) ; 
                __context__.SourceCodeLine = 18;
                WaitForInitializationComplete ( ) ; 
                __context__.SourceCodeLine = 20;
                Functions.Delay (  (int) ( 300 ) ) ; 
                __context__.SourceCodeLine = 22;
                ushort __FN_FORSTART_VAL__1 = (ushort) ( 1 ) ;
                ushort __FN_FOREND_VAL__1 = (ushort)100; 
                int __FN_FORSTEP_VAL__1 = (int)1; 
                for ( _SplusNVRAM.Z  = __FN_FORSTART_VAL__1; (__FN_FORSTEP_VAL__1 > 0)  ? ( (_SplusNVRAM.Z  >= __FN_FORSTART_VAL__1) && (_SplusNVRAM.Z  <= __FN_FOREND_VAL__1) ) : ( (_SplusNVRAM.Z  <= __FN_FORSTART_VAL__1) && (_SplusNVRAM.Z  >= __FN_FOREND_VAL__1) ) ; _SplusNVRAM.Z  += (ushort)__FN_FORSTEP_VAL__1) 
                    { 
                    __context__.SourceCodeLine = 24;
                    DIGITAL_OUT [ _SplusNVRAM.Z]  .Value = (ushort) ( _SplusNVRAM.STOREDVALUES[ _SplusNVRAM.Z ] ) ; 
                    __context__.SourceCodeLine = 22;
                    } 
                
                __context__.SourceCodeLine = 27;
                _SplusNVRAM.READY = (ushort) ( 1 ) ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler(); }
            return __obj__;
            }
            
        private void CLEARALLVALUES (  SplusExecutionContext __context__ ) 
            { 
            
            __context__.SourceCodeLine = 32;
            ushort __FN_FORSTART_VAL__1 = (ushort) ( 1 ) ;
            ushort __FN_FOREND_VAL__1 = (ushort)100; 
            int __FN_FORSTEP_VAL__1 = (int)1; 
            for ( _SplusNVRAM.Z  = __FN_FORSTART_VAL__1; (__FN_FORSTEP_VAL__1 > 0)  ? ( (_SplusNVRAM.Z  >= __FN_FORSTART_VAL__1) && (_SplusNVRAM.Z  <= __FN_FOREND_VAL__1) ) : ( (_SplusNVRAM.Z  <= __FN_FORSTART_VAL__1) && (_SplusNVRAM.Z  >= __FN_FOREND_VAL__1) ) ; _SplusNVRAM.Z  += (ushort)__FN_FORSTEP_VAL__1) 
                { 
                __context__.SourceCodeLine = 34;
                _SplusNVRAM.STOREDVALUES [ _SplusNVRAM.Z] = (ushort) ( 0 ) ; 
                __context__.SourceCodeLine = 35;
                DIGITAL_OUT [ _SplusNVRAM.Z]  .Value = (ushort) ( 0 ) ; 
                __context__.SourceCodeLine = 32;
                } 
            
            
            }
            
        object CLEAR_ALL_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 41;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (_SplusNVRAM.READY == 1))  ) ) 
                    { 
                    __context__.SourceCodeLine = 43;
                    CLEARALLVALUES (  __context__  ) ; 
                    } 
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object DIGITAL_IN_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 49;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (_SplusNVRAM.READY == 1))  ) ) 
                { 
                __context__.SourceCodeLine = 51;
                _SplusNVRAM.X = (ushort) ( Functions.GetLastModifiedArrayIndex( __SignalEventArg__ ) ) ; 
                __context__.SourceCodeLine = 53;
                CLEARALLVALUES (  __context__  ) ; 
                __context__.SourceCodeLine = 55;
                _SplusNVRAM.STOREDVALUES [ _SplusNVRAM.X] = (ushort) ( 1 ) ; 
                __context__.SourceCodeLine = 56;
                DIGITAL_OUT [ _SplusNVRAM.X]  .Value = (ushort) ( 1 ) ; 
                } 
            
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    

public override void LogosSplusInitialize()
{
    SocketInfo __socketinfo__ = new SocketInfo( 1, this );
    InitialParametersClass.ResolveHostName = __socketinfo__.ResolveHostName;
    _SplusNVRAM = new SplusNVRAM( this );
    _SplusNVRAM.STOREDVALUES  = new ushort[ 101 ];
    
    CLEAR_ALL = new Crestron.Logos.SplusObjects.DigitalInput( CLEAR_ALL__DigitalInput__, this );
    m_DigitalInputList.Add( CLEAR_ALL__DigitalInput__, CLEAR_ALL );
    
    DIGITAL_IN = new InOutArray<DigitalInput>( 100, this );
    for( uint i = 0; i < 100; i++ )
    {
        DIGITAL_IN[i+1] = new Crestron.Logos.SplusObjects.DigitalInput( DIGITAL_IN__DigitalInput__ + i, DIGITAL_IN__DigitalInput__, this );
        m_DigitalInputList.Add( DIGITAL_IN__DigitalInput__ + i, DIGITAL_IN[i+1] );
    }
    
    DIGITAL_OUT = new InOutArray<DigitalOutput>( 100, this );
    for( uint i = 0; i < 100; i++ )
    {
        DIGITAL_OUT[i+1] = new Crestron.Logos.SplusObjects.DigitalOutput( DIGITAL_OUT__DigitalOutput__ + i, this );
        m_DigitalOutputList.Add( DIGITAL_OUT__DigitalOutput__ + i, DIGITAL_OUT[i+1] );
    }
    
    
    CLEAR_ALL.OnDigitalPush.Add( new InputChangeHandlerWrapper( CLEAR_ALL_OnPush_0, false ) );
    for( uint i = 0; i < 100; i++ )
        DIGITAL_IN[i+1].OnDigitalPush.Add( new InputChangeHandlerWrapper( DIGITAL_IN_OnPush_1, false ) );
        
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_NON_VOLATILE_INTERLOCK ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint CLEAR_ALL__DigitalInput__ = 0;
const uint DIGITAL_IN__DigitalInput__ = 1;
const uint DIGITAL_OUT__DigitalOutput__ = 0;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    [SplusStructAttribute(0, false, true)]
            public ushort X = 0;
            [SplusStructAttribute(1, false, true)]
            public ushort Z = 0;
            [SplusStructAttribute(2, false, true)]
            public ushort READY = 0;
            [SplusStructAttribute(3, false, true)]
            public ushort [] STOREDVALUES;
            
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
