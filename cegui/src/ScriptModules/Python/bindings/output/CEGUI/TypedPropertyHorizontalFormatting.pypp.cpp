// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "TypedPropertyHorizontalFormatting.pypp.hpp"

namespace bp = boost::python;

struct TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper : CEGUI::TypedProperty< CEGUI::HorizontalFormatting >, bp::wrapper< CEGUI::TypedProperty< CEGUI::HorizontalFormatting > > {

    virtual ::CEGUI::String get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_get = this->get_override( "get" ) )
            return func_get( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::get( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::get( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::HorizontalFormatting getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getNative = this->get_override( "getNative" ) )
            return func_getNative( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::getNative( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::HorizontalFormatting default_getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::getNative( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::HorizontalFormatting getNative_impl( ::CEGUI::PropertyReceiver const * receiver ) const {
        bp::override func_getNative_impl = this->get_override( "getNative_impl" );
        return func_getNative_impl( boost::python::ptr(receiver) );
    }

    virtual void set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        if( bp::override func_set = this->get_override( "set" ) )
            func_set( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::set( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::set( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::HorizontalFormatting value ) {
        if( bp::override func_setNative = this->get_override( "setNative" ) )
            func_setNative( boost::python::ptr(receiver), value );
        else{
            this->CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::setNative( boost::python::ptr(receiver), value );
        }
    }
    
    void default_setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::HorizontalFormatting value ) {
        CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::setNative( boost::python::ptr(receiver), value );
    }

    virtual void setNative_impl( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::HorizontalFormatting value ){
        bp::override func_setNative_impl = this->get_override( "setNative_impl" );
        func_setNative_impl( boost::python::ptr(receiver), value );
    }

    virtual ::CEGUI::Property * clone(  ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone(  );
    }

    virtual bool doesWriteXML(  ) const  {
        if( bp::override func_doesWriteXML = this->get_override( "doesWriteXML" ) )
            return func_doesWriteXML(  );
        else{
            return this->CEGUI::Property::doesWriteXML(  );
        }
    }
    
    bool default_doesWriteXML(  ) const  {
        return CEGUI::Property::doesWriteXML( );
    }

    virtual ::CEGUI::String getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getDefault = this->get_override( "getDefault" ) )
            return func_getDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::getDefault( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::getDefault( boost::python::ptr(receiver) );
    }

    virtual void initialisePropertyReceiver( ::CEGUI::PropertyReceiver * arg0 ) const  {
        if( bp::override func_initialisePropertyReceiver = this->get_override( "initialisePropertyReceiver" ) )
            func_initialisePropertyReceiver( boost::python::ptr(arg0) );
        else{
            this->CEGUI::Property::initialisePropertyReceiver( boost::python::ptr(arg0) );
        }
    }
    
    void default_initialisePropertyReceiver( ::CEGUI::PropertyReceiver * arg0 ) const  {
        CEGUI::Property::initialisePropertyReceiver( boost::python::ptr(arg0) );
    }

    virtual bool isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_isDefault = this->get_override( "isDefault" ) )
            return func_isDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::isDefault( boost::python::ptr(receiver) );
        }
    }
    
    bool default_isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::isDefault( boost::python::ptr(receiver) );
    }

    virtual bool isReadable(  ) const  {
        if( bp::override func_isReadable = this->get_override( "isReadable" ) )
            return func_isReadable(  );
        else{
            return this->CEGUI::Property::isReadable(  );
        }
    }
    
    bool default_isReadable(  ) const  {
        return CEGUI::Property::isReadable( );
    }

    virtual bool isWritable(  ) const  {
        if( bp::override func_isWritable = this->get_override( "isWritable" ) )
            return func_isWritable(  );
        else{
            return this->CEGUI::Property::isWritable(  );
        }
    }
    
    bool default_isWritable(  ) const  {
        return CEGUI::Property::isWritable( );
    }

    virtual void writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        else{
            this->CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
    }

};

void register_TypedPropertyHorizontalFormatting_class(){

    { //::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >
        typedef bp::class_< TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper, bp::bases< CEGUI::Property >, boost::noncopyable > TypedPropertyHorizontalFormatting_exposer_t;
        TypedPropertyHorizontalFormatting_exposer_t TypedPropertyHorizontalFormatting_exposer = TypedPropertyHorizontalFormatting_exposer_t( "TypedPropertyHorizontalFormatting", bp::no_init );
        bp::scope TypedPropertyHorizontalFormatting_scope( TypedPropertyHorizontalFormatting_exposer );
        { //::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::get
        
            typedef CEGUI::TypedProperty< CEGUI::HorizontalFormatting > exported_class_t;
            typedef ::CEGUI::String ( exported_class_t::*get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "get"
                , get_function_type(&::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::get)
                , default_get_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_get)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::getNative
        
            typedef CEGUI::TypedProperty< CEGUI::HorizontalFormatting > exported_class_t;
            typedef ::CEGUI::HorizontalFormatting ( exported_class_t::*getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::HorizontalFormatting ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "getNative"
                , getNative_function_type(&::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::getNative)
                , default_getNative_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_getNative)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::getNative_impl
        
            typedef CEGUI::TypedProperty< CEGUI::HorizontalFormatting > exported_class_t;
            typedef ::CEGUI::HorizontalFormatting ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*getNative_impl_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "getNative_impl"
                , getNative_impl_function_type( &TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::getNative_impl )
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::set
        
            typedef CEGUI::TypedProperty< CEGUI::HorizontalFormatting > exported_class_t;
            typedef void ( exported_class_t::*set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            typedef void ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "set"
                , set_function_type(&::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::set)
                , default_set_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_set)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::setNative
        
            typedef CEGUI::TypedProperty< CEGUI::HorizontalFormatting > exported_class_t;
            typedef void ( exported_class_t::*setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::HorizontalFormatting ) ;
            typedef void ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::HorizontalFormatting ) ;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "setNative"
                , setNative_function_type(&::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::setNative)
                , default_setNative_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_setNative)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::HorizontalFormatting >::setNative_impl
        
            typedef CEGUI::TypedProperty< CEGUI::HorizontalFormatting > exported_class_t;
            typedef void ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*setNative_impl_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::HorizontalFormatting ) ;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "setNative_impl"
                , setNative_impl_function_type( &TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::setNative_impl )
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::Property::clone
        
            typedef ::CEGUI::Property * ( ::CEGUI::Property::*clone_function_type )(  ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::CEGUI::Property::clone) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Property::doesWriteXML
        
            typedef bool ( ::CEGUI::Property::*doesWriteXML_function_type )(  ) const;
            typedef bool ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_doesWriteXML_function_type )(  ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "doesWriteXML"
                , doesWriteXML_function_type(&::CEGUI::Property::doesWriteXML)
                , default_doesWriteXML_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_doesWriteXML) );
        
        }
        { //::CEGUI::Property::getDefault
        
            typedef ::CEGUI::String ( ::CEGUI::Property::*getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "getDefault"
                , getDefault_function_type(&::CEGUI::Property::getDefault)
                , default_getDefault_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_getDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::initialisePropertyReceiver
        
            typedef void ( ::CEGUI::Property::*initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            typedef void ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "initialisePropertyReceiver"
                , initialisePropertyReceiver_function_type(&::CEGUI::Property::initialisePropertyReceiver)
                , default_initialisePropertyReceiver_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_initialisePropertyReceiver)
                , ( bp::arg("arg0") ) );
        
        }
        { //::CEGUI::Property::isDefault
        
            typedef bool ( ::CEGUI::Property::*isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef bool ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "isDefault"
                , isDefault_function_type(&::CEGUI::Property::isDefault)
                , default_isDefault_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_isDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isReadable
        
            typedef bool ( ::CEGUI::Property::*isReadable_function_type )(  ) const;
            typedef bool ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_isReadable_function_type )(  ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "isReadable"
                , isReadable_function_type(&::CEGUI::Property::isReadable)
                , default_isReadable_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_isReadable) );
        
        }
        { //::CEGUI::Property::isWritable
        
            typedef bool ( ::CEGUI::Property::*isWritable_function_type )(  ) const;
            typedef bool ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_isWritable_function_type )(  ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "isWritable"
                , isWritable_function_type(&::CEGUI::Property::isWritable)
                , default_isWritable_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_isWritable) );
        
        }
        { //::CEGUI::Property::writeXMLToStream
        
            typedef void ( ::CEGUI::Property::*writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            typedef void ( TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            
            TypedPropertyHorizontalFormatting_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Property::writeXMLToStream)
                , default_writeXMLToStream_function_type(&TypedProperty_less__CEGUI_scope_HorizontalFormatting__greater__wrapper::default_writeXMLToStream)
                , ( bp::arg("receiver"), bp::arg("xml_stream") ) );
        
        }
    }

}
