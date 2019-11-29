#ifndef AOSFXPLAYER_H
#define AOSFXPLAYER_H

#include "contrib/bass.h"
#include "aoapplication.h"

#include <QWidget>
#include <string.h>
#include <QDebug>

class AOSfxPlayer
{
public:
  AOSfxPlayer(QWidget *parent, AOApplication *p_ao_app);

  void play(QString p_sfx, QString p_char = "", QString shout = "");
  void stop();
  void set_volume(int p_volume);
  int get_volume() { return m_volume; }

private:
  QWidget *m_parent;
  AOApplication *ao_app;
  Options options;

  int m_volume = 0;
  HSTREAM m_stream;
};

#endif // AOSFXPLAYER_H
