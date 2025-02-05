// Copyright (C) 2017 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com, author Rafael Roquetto <rafael.roquetto@kdab.com>
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef HELPERS_H
#define HELPERS_H

#include "provider.h"

#include <qlist.h>
#include <qstring.h>

enum ParamType {
    LTTNG,
    ETW,
    CTF
};

QString typeToName(const QString &name);
QString includeGuard(const QString &filename);
QString formatFunctionSignature(const QList<Tracepoint::Argument> &args);
QString formatParameterList(const Provider &provider, const QList<Tracepoint::Argument> &args, const QList<Tracepoint::Field> &fields, ParamType type);

#endif // HELPERS_H
