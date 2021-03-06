// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "ColourRect.pypp.hpp"

namespace bp = boost::python;

void register_ColourRect_class(){

    { //::CEGUI::ColourRect
        typedef bp::class_< CEGUI::ColourRect > ColourRect_exposer_t;
        ColourRect_exposer_t ColourRect_exposer = ColourRect_exposer_t( "ColourRect", bp::init< >("*!\n\
        \n\
           Default constructor\n\
        *\n") );
        bp::scope ColourRect_scope( ColourRect_exposer );
        ColourRect_exposer.def( bp::init< CEGUI::Colour const & >(( bp::arg("col") ), "*!\n\
        \n\
           Constructor for ColourRect objects (via single colour).  Also handles default construction.\n\
        *\n") );
        bp::implicitly_convertible< CEGUI::Colour const &, CEGUI::ColourRect >();
        ColourRect_exposer.def( bp::init< CEGUI::Colour const &, CEGUI::Colour const &, CEGUI::Colour const &, CEGUI::Colour const & >(( bp::arg("top_left"), bp::arg("top_right"), bp::arg("bottom_left"), bp::arg("bottom_right") ), "*!\n\
        \n\
           Constructor for ColourRect objects\n\
        *\n") );
        { //::CEGUI::ColourRect::getColourAtPoint
        
            typedef ::CEGUI::Colour ( ::CEGUI::ColourRect::*getColourAtPoint_function_type )( float,float ) const;
            
            ColourRect_exposer.def( 
                "getColourAtPoint"
                , getColourAtPoint_function_type( &::CEGUI::ColourRect::getColourAtPoint )
                , ( bp::arg("x"), bp::arg("y") )
                , "*!\n\
               \n\
                  Get the colour at a point in the rectangle\n\
            \n\
               @param x\n\
                  The x coordinate of the point\n\
               @param y\n\
                  The y coordinate of the point\n\
            \n\
               @return\n\
                  The colour at the specified point.\n\
               *\n" );
        
        }
        { //::CEGUI::ColourRect::getSubRectangle
        
            typedef ::CEGUI::ColourRect ( ::CEGUI::ColourRect::*getSubRectangle_function_type )( float,float,float,float ) const;
            
            ColourRect_exposer.def( 
                "getSubRectangle"
                , getSubRectangle_function_type( &::CEGUI::ColourRect::getSubRectangle )
                , ( bp::arg("left"), bp::arg("right"), bp::arg("top"), bp::arg("bottom") )
                , "*!\n\
               \n\
                  Gets a portion of this ColourRect as a subset ColourRect\n\
            \n\
               @param left\n\
                  The left side of this subrectangle (in the range of 0-1 float)\n\
               @param right\n\
                  The right side of this subrectangle (in the range of 0-1 float)\n\
               @param top\n\
                  The top side of this subrectangle (in the range of 0-1 float)\n\
               @param bottom\n\
                  The bottom side of this subrectangle (in the range of 0-1 float)\n\
            \n\
               @return\n\
                  A ColourRect from the specified range\n\
               *\n" );
        
        }
        { //::CEGUI::ColourRect::isMonochromatic
        
            typedef bool ( ::CEGUI::ColourRect::*isMonochromatic_function_type )(  ) const;
            
            ColourRect_exposer.def( 
                "isMonochromatic"
                , isMonochromatic_function_type( &::CEGUI::ColourRect::isMonochromatic )
                , "*!\n\
               \n\
                  Determinate the ColourRect is monochromatic or variegated.\n\
            \n\
               @return\n\
                  True if all four corners of the ColourRect has same colour, false otherwise.\n\
               *\n" );
        
        }
        { //::CEGUI::ColourRect::modulateAlpha
        
            typedef void ( ::CEGUI::ColourRect::*modulateAlpha_function_type )( float ) ;
            
            ColourRect_exposer.def( 
                "modulateAlpha"
                , modulateAlpha_function_type( &::CEGUI::ColourRect::modulateAlpha )
                , ( bp::arg("alpha") )
                , "*!\n\
               \n\
                  Module the alpha components of each corner's colour by a constant.\n\
            \n\
               @param alpha\n\
                  The constant factor to modulate all alpha colour components by.\n\
               *\n" );
        
        }
        ColourRect_exposer.def( bp::self * bp::other< float >() );
        ColourRect_exposer.def( bp::self *= bp::self );
        ColourRect_exposer.def( bp::self + bp::self );
        { //::CEGUI::ColourRect::setAlpha
        
            typedef void ( ::CEGUI::ColourRect::*setAlpha_function_type )( float ) ;
            
            ColourRect_exposer.def( 
                "setAlpha"
                , setAlpha_function_type( &::CEGUI::ColourRect::setAlpha )
                , ( bp::arg("alpha") )
                , "*!\n\
               \n\
                  Set the alpha value to use for all four corners of the ColourRect.\n\
            \n\
               @param alpha\n\
                  Alpha value to use.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ColourRect::setBottomAlpha
        
            typedef void ( ::CEGUI::ColourRect::*setBottomAlpha_function_type )( float ) ;
            
            ColourRect_exposer.def( 
                "setBottomAlpha"
                , setBottomAlpha_function_type( &::CEGUI::ColourRect::setBottomAlpha )
                , ( bp::arg("alpha") )
                , "*!\n\
               \n\
                  Set the alpha value to use for the bottom edge of the ColourRect.\n\
            \n\
               @param alpha\n\
                  Alpha value to use.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ColourRect::setColours
        
            typedef void ( ::CEGUI::ColourRect::*setColours_function_type )( ::CEGUI::Colour const & ) ;
            
            ColourRect_exposer.def( 
                "setColours"
                , setColours_function_type( &::CEGUI::ColourRect::setColours )
                , ( bp::arg("col") )
                , "*!\n\
               \n\
                  Set the colour of all four corners simultaneously.\n\
            \n\
               @param col\n\
                  colour that is to be set for all four corners of the ColourRect;\n\
               *\n" );
        
        }
        { //::CEGUI::ColourRect::setLeftAlpha
        
            typedef void ( ::CEGUI::ColourRect::*setLeftAlpha_function_type )( float ) ;
            
            ColourRect_exposer.def( 
                "setLeftAlpha"
                , setLeftAlpha_function_type( &::CEGUI::ColourRect::setLeftAlpha )
                , ( bp::arg("alpha") )
                , "*!\n\
               \n\
                  Set the alpha value to use for the left edge of the ColourRect.\n\
            \n\
               @param alpha\n\
                  Alpha value to use.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ColourRect::setRightAlpha
        
            typedef void ( ::CEGUI::ColourRect::*setRightAlpha_function_type )( float ) ;
            
            ColourRect_exposer.def( 
                "setRightAlpha"
                , setRightAlpha_function_type( &::CEGUI::ColourRect::setRightAlpha )
                , ( bp::arg("alpha") )
                , "*!\n\
               \n\
                  Set the alpha value to use for the right edge of the ColourRect.\n\
            \n\
               @param alpha\n\
                  Alpha value to use.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ColourRect::setTopAlpha
        
            typedef void ( ::CEGUI::ColourRect::*setTopAlpha_function_type )( float ) ;
            
            ColourRect_exposer.def( 
                "setTopAlpha"
                , setTopAlpha_function_type( &::CEGUI::ColourRect::setTopAlpha )
                , ( bp::arg("alpha") )
                , "*!\n\
               \n\
                  Set the alpha value to use for the top edge of the ColourRect.\n\
            \n\
               @param alpha\n\
                  Alpha value to use.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        ColourRect_exposer.def_readwrite( "d_bottom_left", &CEGUI::ColourRect::d_bottom_left );
        ColourRect_exposer.def_readwrite( "d_bottom_right", &CEGUI::ColourRect::d_bottom_right );
        ColourRect_exposer.def_readwrite( "d_top_left", &CEGUI::ColourRect::d_top_left );
        ColourRect_exposer.def_readwrite( "d_top_right", &CEGUI::ColourRect::d_top_right );
    }

}
