set(headers ${headers} ../src/NavRouting/SdkModel
)
set(currsources
  ../src/NavRouting/SdkModel/CMakeLists.txt
  ../src/NavRouting/SdkModel/INavRoutingModel.h
  ../src/NavRouting/SdkModel/INavRouteDrawingController.h
  ../src/NavRouting/SdkModel/INavRoutingLocationFinder.h
  ../src/NavRouting/SdkModel/INavRoutingPolylineFactory.h
  ../src/NavRouting/SdkModel/INavRoutingServiceController.h
  ../src/NavRouting/SdkModel/INavRoutingHighlightsController.h
  ../src/NavRouting/SdkModel/NavRouteInstructionHelper.cpp
  ../src/NavRouting/SdkModel/NavRouteInstructionHelper.h
  ../src/NavRouting/SdkModel/NavRouteInteriorModelHelper.cpp
  ../src/NavRouting/SdkModel/NavRouteInteriorModelHelper.h
  ../src/NavRouting/SdkModel/NavRoutingServiceController.cpp
  ../src/NavRouting/SdkModel/NavRoutingServiceController.h
  ../src/NavRouting/SdkModel/NavRoutingWorldPinsVisibilityHandler.cpp
  ../src/NavRouting/SdkModel/NavRoutingWorldPinsVisibilityHandler.h
  ../src/NavRouting/SdkModel/NavRoutingController.cpp
  ../src/NavRouting/SdkModel/NavRoutingController.h
  ../src/NavRouting/SdkModel/NavRoutingDirectionModel.cpp
  ../src/NavRouting/SdkModel/NavRoutingDirectionModel.h
  ../src/NavRouting/SdkModel/NavRoutingHighlightsController.cpp
  ../src/NavRouting/SdkModel/NavRoutingHighlightsController.h
  ../src/NavRouting/SdkModel/NavRoutingLocationFinder.cpp
  ../src/NavRouting/SdkModel/NavRoutingLocationFinder.h
  ../src/NavRouting/SdkModel/NavRoutingLocationModel.cpp
  ../src/NavRouting/SdkModel/NavRoutingLocationModel.h
  ../src/NavRouting/SdkModel/NavRoutingModel.cpp
  ../src/NavRouting/SdkModel/NavRoutingModel.h
  ../src/NavRouting/SdkModel/NavRoutingRouteModel.cpp
  ../src/NavRouting/SdkModel/NavRoutingRouteModel.h
  ../src/NavRouting/SdkModel/NavRouteDrawingController.cpp
  ../src/NavRouting/SdkModel/NavRouteDrawingController.h
  ../src/NavRouting/SdkModel/NavRoutingModule.cpp
  ../src/NavRouting/SdkModel/NavRoutingModule.h
  ../src/NavRouting/SdkModel/NavRoutingPolylineFactory.cpp
  ../src/NavRouting/SdkModel/NavRoutingPolylineFactory.h
  ../src/NavRouting/SdkModel/NavWidgetRouteDrawingHandler.cpp
  ../src/NavRouting/SdkModel/NavWidgetRouteDrawingHandler.h
  ../src/NavRouting/SdkModel/NavWidgetRouteUpdateHandler.cpp
  ../src/NavRouting/SdkModel/NavWidgetRouteUpdateHandler.h
  ../src/NavRouting/SdkModel/NavRoutingCameraController.cpp
  ../src/NavRouting/SdkModel/NavRoutingCameraController.h
  ../src/NavRouting/SdkModel/NavRoutingCustomLocationPicker.cpp
  ../src/NavRouting/SdkModel/NavRoutingCustomLocationPicker.h
  ../src/NavRouting/SdkModel/INavRoutingCustomLocationPicker.h
  ../src/NavRouting/SdkModel/NavRoutingPolylineCreateParams.h
)
set(sources ${sources} ${currsources})
source_group(\\src\\NavRouting\\SdkModel FILES ${currsources})
include(../src/NavRouting/SdkModel/TurnByTurn/CMakeLists.txt)
