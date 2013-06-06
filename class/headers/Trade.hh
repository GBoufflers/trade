#ifndef		__TRADE_HH__
#define		__TRADE_HH__

#include	<list>
#include	"common.hh"

#define		COM 0.0015

class		Trade
{
private:
  int		_capital;
  int		_nbJours;
  std::list<int> _cours;
  int		_trend;
  int		_old;
  int		_actions;
public:
  Trade();
  ~Trade();
  void		run();
  void		doWait() const;
  void		doSell(int nb);
  void		doBuy(int nb);
  void		action(std::string input);
  void		checkTrend();
};

#endif
