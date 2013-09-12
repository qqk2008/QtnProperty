/*
 * Copyright (c) 2012 - 2013, the Qtinuum project.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * <qtinuum.team@gmail.com>
 */

#ifndef PROPERTYQSIZE_H
#define PROPERTYQSIZE_H

#include "../PropertyBasis.h"
#include <QSize>

namespace Qtinuum
{

class QTN_PE_CORE_EXPORT PropertyQSizeBase: public SinglePropertyBase<QSize>
{
    Q_OBJECT

public:
    explicit PropertyQSizeBase(QObject *parent);

    P_PROPERTY_DECL_MEMBER_OPERATORS(PropertyQSizeBase)
    P_PROPERTY_DECL_COPY_CONSTRUCTORS(PropertyQSizeBase, SinglePropertyBase<QSize>)
};

P_PROPERTY_DECL_EQ_OPERATORS(PropertyQSizeBase, QSize)

QTN_PE_CORE_EXPORT Property* createWidthProperty(QObject *parent, PropertyQSizeBase *propertySize);
QTN_PE_CORE_EXPORT Property* createHeightProperty(QObject *parent, PropertyQSizeBase *propertySize);

class QTN_PE_CORE_EXPORT PropertyQSizeCallback: public SinglePropertyCallback<PropertyQSizeBase>
{
    Q_OBJECT

public:
    explicit PropertyQSizeCallback(QObject *parent)
        : SinglePropertyCallback<PropertyQSizeBase>(parent)
    {
    }

    P_PROPERTY_DECL_MEMBER_OPERATORS2(PropertyQSizeCallback, PropertyQSizeBase)
    P_PROPERTY_DECL_MEMBER_CLONING(PropertyQSizeCallback, SinglePropertyCallback<PropertyQSizeBase>)
};

class QTN_PE_CORE_EXPORT PropertyQSize: public SinglePropertyValue<PropertyQSizeBase>
{
    Q_OBJECT

public:
    explicit PropertyQSize(QObject *parent)
        : SinglePropertyValue<PropertyQSizeBase>(parent)
    {
    }

    P_PROPERTY_DECL_MEMBER_OPERATORS2(PropertyQSize, PropertyQSizeBase)
    P_PROPERTY_DECL_MEMBER_CLONING(PropertyQSize, SinglePropertyValue<PropertyQSizeBase>)
};

} // end namespace Qtinuum

#endif // PROPERTYQSIZE_H
