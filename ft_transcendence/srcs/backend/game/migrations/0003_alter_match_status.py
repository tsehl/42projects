# Generated by Django 5.0.6 on 2025-03-14 09:43

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('game', '0002_remove_match_score'),
    ]

    operations = [
        migrations.AlterField(
            model_name='match',
            name='status',
            field=models.CharField(choices=[('pending', 'Pending'), ('started', 'Started'), ('finished', 'Finished')], default='pending', max_length=100),
        ),
    ]
