#ifndef YETIAPP_H
#define YETIAPP_H

#include "MooseApp.h"

class YetiApp;

template<>
InputParameters validParams<YetiApp>();

class YetiApp : public MooseApp
{
public:
  YetiApp(InputParameters parameters);
  virtual ~YetiApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* YETIAPP_H */
