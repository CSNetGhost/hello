// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2020 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#include "WsfScriptPrinceDormand78.hpp"

#include "UtCast.hpp"
#include "UtLog.hpp"
#include "UtMemory.hpp"
#include "WsfPrinceDormand78OrbitalIntegrator.hpp"

WsfScriptPrinceDormand78Integrator::WsfScriptPrinceDormand78Integrator(const std::string& aClassName,
                                                                       UtScriptTypes*     aScriptTypesPtr)
   : WsfScriptOrbitalIntegrator(aClassName, aScriptTypesPtr)
{
   mConstructible = true;

   SetClassName("WsfPrinceDormand78Integrator");

   AddMethod(ut::make_unique<Tolerance>());
   AddMethod(ut::make_unique<SetTolerance>());
   AddMethod(ut::make_unique<MaxAdjustmentAttempts>());
   AddMethod(ut::make_unique<SetMaxAdjustmentAttempts>());
   AddMethod(ut::make_unique<MaxStepSize>());
   AddMethod(ut::make_unique<SetMaxStepSize>());
   AddMethod(ut::make_unique<MinStepSize>());
   AddMethod(ut::make_unique<SetMinStepSize>());
   AddMethod(ut::make_unique<ErrorCriterion>());
   AddMethod(ut::make_unique<SetErrorCriterion>());
   AddMethod(ut::make_unique<InitialStepSize>());
   AddMethod(ut::make_unique<SetInitialStepSize>());
   AddStaticMethod(ut::make_unique<L_INFINITY>());
   AddStaticMethod(ut::make_unique<L_TWO>());
}

void* WsfScriptPrinceDormand78Integrator::Create(const UtScriptContext& aInstance)
{
   return new WsfPrinceDormand78OrbitalIntegrator{};
}

void WsfScriptPrinceDormand78Integrator::Destroy(void* aObjectPtr)
{
   delete static_cast<WsfPrinceDormand78OrbitalIntegrator*>(aObjectPtr);
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, Tolerance, 0, "double", "")
{
   aReturnVal.SetDouble(aObjectPtr->GetTolerance());
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, SetTolerance, 1, "void", "double")
{
   double tol = aVarArgs[0].GetDouble();
   if (tol <= 0.0)
   {
      auto err = ut::log::error() << "Argument out of bounds.";
      err.AddNote() << "Tolerance must be positive (" << tol << " provided).";
      UT_SCRIPT_ABORT("Argument out of bounds.");
   }
   aObjectPtr->SetTolerance(tol);
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator,
                        WsfPrinceDormand78OrbitalIntegrator,
                        MaxAdjustmentAttempts,
                        0,
                        "int",
                        "")
{
   aReturnVal.SetInt(ut::cast_to_int(aObjectPtr->GetMaxAdjustmentAttempts()));
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator,
                        WsfPrinceDormand78OrbitalIntegrator,
                        SetMaxAdjustmentAttempts,
                        1,
                        "void",
                        "int")
{
   int maa = aVarArgs[0].GetInt();
   if (maa <= 0)
   {
      auto err = ut::log::error() << "Argument out of bounds.";
      err.AddNote() << "Maximum adjustment attempts must be positive (" << maa << " provided).";
      UT_SCRIPT_ABORT("Argument out of bounds.");
   }
   aObjectPtr->SetMaxAdjustmentAttempts(ut::safe_cast<unsigned int, int>(maa));
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, MaxStepSize, 0, "double", "")
{
   aReturnVal.SetDouble(aObjectPtr->GetMaxStepSize());
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, SetMaxStepSize, 1, "void", "double")
{
   double mss = aVarArgs[0].GetDouble();
   if (mss <= 0.0)
   {
      UT_SCRIPT_ABORT("Maximum step size must be positive.");
   }
   if (mss < aObjectPtr->GetMinStepSize())
   {
      auto err = ut::log::error() << "Argument out of bounds.";
      err.AddNote() << "Maximum step size (" << mss << " provided) must not be less than current minimum step size ("
                    << aObjectPtr->GetMinStepSize() << ").";
      UT_SCRIPT_ABORT("Argument out of bounds.");
   }
   aObjectPtr->SetMaxStepSize(mss);
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, MinStepSize, 0, "double", "")
{
   aReturnVal.SetDouble(aObjectPtr->GetMinStepSize());
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, SetMinStepSize, 1, "void", "double")
{
   double mss = aVarArgs[0].GetDouble();
   if (mss < 0.0)
   {
      UT_SCRIPT_ABORT("Minimum step size must be non-negative.");
   }
   if (mss > aObjectPtr->GetMaxStepSize())
   {
      auto err = ut::log::error() << "Argument out of bounds.";
      err.AddNote() << "Minimum step size (" << mss << " provided) must not be greater than current maximum step size ("
                    << aObjectPtr->GetMaxStepSize() << ").";
      UT_SCRIPT_ABORT("Argument out of bounds.");
   }
   aObjectPtr->SetMinStepSize(mss);
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, ErrorCriterion, 0, "string", "")
{
   aReturnVal.SetString(WsfPrinceDormand78OrbitalIntegrator::GetStringFromCriterion(aObjectPtr->GetErrorCriterion()));
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, SetErrorCriterion, 1, "void", "string")
{
   WsfPrinceDormand78OrbitalIntegrator::ErrorCriterion crit =
      WsfPrinceDormand78OrbitalIntegrator::GetErrorCriterionFromString(aVarArgs[0].GetString());
   if (crit == WsfPrinceDormand78OrbitalIntegrator::ErrorCriterion::cUNKNOWN_CRITERION)
   {
      auto err = ut::log::error() << "Argument out of bounds.";
      err.AddNote() << "Unknown error criterion '" << aVarArgs[0].GetString() << "'.";
      UT_SCRIPT_ABORT("Argument out of bounds.");
   }
   aObjectPtr->SetErrorCriterion(crit);
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, InitialStepSize, 0, "double", "")
{
   aReturnVal.SetDouble(aObjectPtr->GetInitialStepSize());
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator,
                        WsfPrinceDormand78OrbitalIntegrator,
                        SetInitialStepSize,
                        1,
                        "void",
                        "double")
{
   double iss = aVarArgs[0].GetDouble();
   if (iss <= 0.0)
   {
      auto err = ut::log::error() << "Argument out of bounds.";
      err.AddNote() << "Initial step size must be positive (" << iss << " provided).";
      UT_SCRIPT_ABORT("Argument out of bounds.");
   }
   aObjectPtr->SetInitialStepSize(iss);
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, L_INFINITY, 0, "string", "")
{
   aReturnVal.SetString(WsfPrinceDormand78OrbitalIntegrator::GetStringFromCriterion(
      WsfPrinceDormand78OrbitalIntegrator::ErrorCriterion::cL_INFINITY_NORM));
}

UT_DEFINE_SCRIPT_METHOD(WsfScriptPrinceDormand78Integrator, WsfPrinceDormand78OrbitalIntegrator, L_TWO, 0, "string", "")
{
   aReturnVal.SetString(WsfPrinceDormand78OrbitalIntegrator::GetStringFromCriterion(
      WsfPrinceDormand78OrbitalIntegrator::ErrorCriterion::cL_TWO_NORM));
}
