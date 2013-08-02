// ModelTests.cpp 
#include <gtest/gtest.h>

#include "ModelTests.h"
#include <string>

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
TEST_P(ModelTests, DISABLED_CreateFromXML) {
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
TEST_P(ModelTests, DISABLED_LoadConstructor) {
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
TEST_P(ModelTests, DISABLED_InitFromXML) {
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
TEST_P(ModelTests, Print) {
  std::string s = model_->str();
  EXPECT_NO_THROW(std::string s = model_->str());
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
TEST_P(ModelTests, SetAndGetName) {
  EXPECT_EQ("",model_->name());
  EXPECT_NO_THROW(model_->setName("test_name"));
  EXPECT_EQ(model_->name(),"test_name");
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
TEST_P(ModelTests, SetAndGetModelType) {
  for(int i=cyclus::REGION; i<cyclus::END_MODEL_TYPES; i++){
    switch(i){
      case (cyclus::REGION):
        EXPECT_NO_THROW(model_->setModelType("Region"));
        EXPECT_EQ("Region", model_->modelType());
        break;
      case (cyclus::INST):
        EXPECT_NO_THROW(model_->setModelType("Inst"));
        EXPECT_EQ("Inst", model_->modelType());
        break;
      case (cyclus::FACILITY):
        EXPECT_NO_THROW(model_->setModelType("Facility"));
        EXPECT_EQ("Facility", model_->modelType());
        break;
      case (cyclus::MARKET):
        EXPECT_NO_THROW(model_->setModelType("Market"));
        EXPECT_EQ("Market", model_->modelType());
        break;
      case (cyclus::CONVERTER):
        EXPECT_NO_THROW(model_->setModelType("Converter"));
        EXPECT_EQ("Converter", model_->modelType());
        break;
      default:
        FAIL();
        break;
    }
  }
}

