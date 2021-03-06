#include "notification.h"

QString Notification::notificationCategory() const
{
    return m_notificationCategory;
}

void Notification::setNotificationCategory(const QString &notificationCategory)
{
    m_notificationCategory = notificationCategory;
}

QString Notification::notificationMessage() const
{
    return m_notificationMessage;
}

void Notification::setNotificationMessage(const QString &notificationMessage)
{
    m_notificationMessage = notificationMessage;
}

QString Notification::meetingID() const
{
    return m_meetingID;
}

void Notification::setMeetingID(const QString &meetingID)
{
    m_meetingID = meetingID;
}


